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

#include <vector>
#include <string>
#include <functional>
#include <map>
#include <set>

namespace HLGK
{


    class Instance final {
        VkInstance m_instance;

    public:
        Instance(const VkApplicationInfo &appInfo
                , const std::vector< std::string > &extensions = {}
                , const std::vector< std::string > &layers = {}
                , const VkDebugUtilsMessengerCreateInfoEXT &DUMCI = {});

        ~Instance() {
            vkDestroyInstance(m_instance, nullptr);
        }

    public:
        // TODO: через функтор возможна утечка указателя на m_instance.
        // Для создани поверхности нужны дискрипторы окна(платформа зависимо) и знание оконной системы.
        // TODO: Surface должен быть разрушен до вызова деструктора instance
        // возможно решаемо аллокаторами, надо заботать
        VkSurfaceKHR createSurface(std::function<VkSurfaceKHR (VkInstance)> surfaceCreator) const;
        std::vector< PhysicalDevice > getPhysicalDevices() const;

        template< typename Func_T = PFN_vkVoidFunction>
        inline Func_T getProcAddr(const std::string &name) const {
            return reinterpret_cast<Func_T>(vkGetInstanceProcAddr(m_instance, name.c_str()));
        }

        template< typename Func_T
                , bool firstArgIsInstance = false
                , typename T
                , typename Return_T = typename details::function_info<Func_T>::return_type
                , typename ... Args_T>
        inline Return_T callProcAddr(T f, Args_T... args) const {
            if constexpr(firstArgIsInstance) {
                return reinterpret_cast<Func_T>(f)(m_instance, args...);
            }
            return reinterpret_cast<Func_T>(f)(args...);
        }

        template< typename Func_T
                , bool firstArgIsInstance = false
                , typename Return_T = typename details::function_info<Func_T>::return_type
                , typename ... Args_T>
        inline Return_T callProcAddrName(const std::string &fName, Args_T... args) const {
            return callProcAddr<Func_T, firstArgIsInstance>(getProcAddr<Func_T>(fName), args...);
        }

        LogicalDevice createLogicalDevice(const PhysicalDevice &PD, VkDeviceCreateInfo &info) const;
    }; // class Instance

} // namespace HLGK