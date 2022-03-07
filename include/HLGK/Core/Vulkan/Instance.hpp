/****************************************************************************************
*
*   Instance.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once

#include "Utils.hpp"

#include <vulkan/vulkan.h>

#include <HLGK/Window/IWindow.hpp>
#include <HLGK/Core/Vulkan/PhysicalDevice.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Surface.hpp>

#include <vector>
#include <string>
#include <functional>
#include <unordered_map>
#include <map>
#include <set>

namespace HLGK
{


    class Instance final {
        VkInstance m_instance = {};
        const std::vector< std::string > m_extensions;
        const std::vector< std::string > m_layers;

    public:
        Instance(const VkApplicationInfo &appInfo
                , const std::vector< std::string > &extensions = {}
                , const std::vector< std::string > &layers = {}
                , const VkDebugUtilsMessengerCreateInfoEXT &DUMCI = {});

        Instance(const Instance &) = delete;
        Instance &operator=(const Instance &) = delete;
        Instance(Instance &&) = delete;
        Instance &operator=(Instance &&) = delete;

        ~Instance();

    public:
        // TODO: через функтор возможна утечка указателя на m_instance.
        // Для создани поверхности нужны дискрипторы окна(платформа зависимо) и знание оконной системы.
        Surface createSurface(std::function<VkSurfaceKHR (VkInstance)> surfaceCreator) const;

        std::vector< PhysicalDevice > getPhysicalDevices() const;

        //InstanceProcAddr support
        //=-----------------------
        /// interface for vkGetInstanceProcAddr
        /// \tparam Func_T - the type to which the result will be reduced
        /// \param name - function name
        /// \return - pointer to required function or nullptr.
        template< typename Func_T = PFN_vkVoidFunction>
        inline Func_T getProcAddr(const std::string &name) const {
            return reinterpret_cast<Func_T>(vkGetInstanceProcAddr(m_instance, name.c_str()));
        }

        /// allows calling functions that use a pointer to an instance (if required)
        /// \tparam Func_T The type of function to which the pointer will be brought
        /// \tparam T The type of the received function pointer
        /// \tparam Args_T Types of arguments passed to the function
        /// \param f Pointer to the function being called
        /// \param args Arguments passed to the function
        /// \return returns the result of the function being called
        template< typename Func_T, typename T = void, typename ... Args_T>
        inline details::function_info_rt<Func_T> callProcAddr(T f, Args_T... args) const {
            // Checking whether the first argument is an instance
            if constexpr(std::is_same_v< VkInstance, details::function_info_T0< Func_T > >)
                return reinterpret_cast<Func_T>(f)(m_instance, args...);
            else
                return reinterpret_cast<Func_T>(f)(args...);
        }

        /// Combination of getProcAddr and callProcAddr.
        /// \param fName function name, which will be called
        /// \param args Arguments passed to the function
        /// \return returns the result of the function being called
        template< typename Func_T, typename ... Args_T>
        inline details::function_info_rt<Func_T> callProcAddrName(const std::string &fName, Args_T... args) const {
            return callProcAddr<Func_T>(getProcAddr<Func_T>(fName), args...);
        }
/// the abbreviation of function Instance::callProcAddrName,
/// which allows not to write the name of the called function twice
#define callInstanceProcAddr(instance, func, ...) (instance).callProcAddrName<PFN_ ## func>(#func, __VA_ARGS__)
/// the abbreviation of function Instance::getProcAddr,
/// which allows not to write the name of the called function twice
#define getInstanceProcAddr(instance, func) (instance).getProcAddr<PFN_ ## func>(#func)
    };// class Instance

} // namespace HLGK