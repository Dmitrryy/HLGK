//
// Created by dadro on 27.02.2022.
//
#pragma once

#include <type_traits>

namespace HLGK::details {

    template <typename T, typename ...Pack>
    struct get_first_ {
        using type = T;
    };

    template <typename ...Pack>
    struct unpacker_ : std::true_type {
        using type = typename get_first_<Pack...>::type;
    };

    template<>
    struct unpacker_<> : std::false_type {
        using type = void;
    };


    template <unsigned N, typename T, typename ...Pack>
    struct implement_get_type_pack_ : std::conditional_t<N == 0, unpacker_<T>, implement_get_type_pack_<N - 1, Pack...>> {};

    template <unsigned N, typename T>
    struct implement_get_type_pack_<N, T> : unpacker_<T> {};

    /// Get the N'th type from the type package.
    /// \tparam N - the number of the type you are looking for in the package
    /// \tparam Pack - package of types
    /// \members value - if there are less than N types in the package, then it is false (get_type_pack_is)
    /// \members type - result. if value == false, then type == void. (get_type_pack_t)
    template <unsigned N, typename ...Pack>
    struct get_type_pack : implement_get_type_pack_<N, Pack...> {};

    template <unsigned N, typename ...Pack>
    constexpr bool get_type_pack_is = get_type_pack<N, Pack...>::value;
    template <unsigned N, typename ...Pack>
    using get_type_pack_t = typename get_type_pack<N, Pack...>::type;


    template <typename>
    struct implement_function_info_;

    template <typename R, typename... Args>
    struct implement_function_info_<R(Args...)> {
        using return_type = R;
        using T0 = get_type_pack_t<0, Args...>;
    };

    /// function_info
    /// Provides some information about a function of type T.
    /// \tparam T - type of function
    /// \members return_type - result type of function (function_info_rt)
    /// \members T0 - type of first argument (function_info_T0)
    template<typename T>
    struct function_info : implement_function_info_<typename std::remove_pointer<T>::type> {};

    template< typename T >
    using function_info_rt = typename function_info<T>::return_type;
    template< typename T >
    using function_info_T0 = typename function_info<T>::T0;
}