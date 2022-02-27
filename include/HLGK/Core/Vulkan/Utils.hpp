//
// Created by dadro on 27.02.2022.
//
#pragma once

#include <type_traits>

namespace HLGK::details {
    template< typename ...Args >
    struct pack { };

    template<typename>
    struct function_info;

    template <typename R, typename... Args>
    struct function_info<R(Args...)> {
        using return_type = R;
        using args = pack<Args...>;
    };

    template <typename R, typename... Args>
    struct function_info<R(*)(Args...)> {
        using return_type = R;
        using args = pack<Args...>;
    };

    template <typename LhsFunc, typename RhsFunc>
    struct is_same_args : std::is_same<pack<LhsFunc>, typename function_info<RhsFunc>::args> {};
}