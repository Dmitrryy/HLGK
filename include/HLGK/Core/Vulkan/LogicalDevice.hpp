/****************************************************************************************
*
*   LogicalDevice.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once

#include <HLGK/Core/Vulkan/PhysicalDevice.hpp>
#include <HLGK/Core/Vulkan/Utils.hpp>
#include <HLGK/Core/Vulkan/ExtensionBase.hpp>

#include <string>
#include <vector>
#include <map>
#include <unordered_map>

namespace HLGK
{
    class Instance;
    class PhysicalDevice;
    class Queue;
    class IAllocator;


    class DeviceCore {
    protected:
        VkDevice m_device = {};

    public:
        DeviceCore(const DeviceCore&) = delete;
        DeviceCore(DeviceCore&&) = delete;
        DeviceCore &operator=(const DeviceCore&) = delete;
        DeviceCore &operator=(DeviceCore&&) = delete;

        DeviceCore(const Instance &instance, const PhysicalDevice &device
                , const VkPhysicalDeviceFeatures &features
                , std::vector< std::string > extensions
                , const std::vector< VkDeviceQueueCreateInfo > &queues);

        ~DeviceCore();

    public:
        VkDevice get() const { return m_device; }

        //DeviceProcAddr support
        //=-----------------------
        /// interface for vkGetDeviceProcAddr
        /// \tparam Func_T - the type to which the result will be reduced
        /// \param name - function name
        /// \return - pointer to required function or nullptr.
        template< typename Func_T = PFN_vkVoidFunction>
        inline Func_T getProcAddr(const std::string &name) const {
            return reinterpret_cast<Func_T>(vkGetDeviceProcAddr(m_device, name.c_str()));
        }

        /// allows calling functions that use a pointer to an instance (if required)
        /// \tparam Func_T The type of function to which the pointer will be brought
        /// \tparam T The type of the received function pointer
        /// \tparam Args_T Types of arguments passed to the function
        /// \param f Pointer to the function being called
        /// \param args Arguments passed to the function
        /// \return returns the result of the function being called
        template< typename Func_T, typename ... Args_T>
        inline details::function_info_rt<Func_T> callProcAddr(Func_T f, Args_T &&...args) const {
            // Checking whether the first argument is an instance
            if constexpr(std::is_same_v< VkDevice, details::function_info_T0< Func_T > >)
                return reinterpret_cast<Func_T>(f)(m_device, std::forward<Args_T>(args)...);
            else
                return reinterpret_cast<Func_T>(f)(std::forward<Args_T>(args)...);
        }

        /// Combination of getProcAddr and callProcAddr.
        /// \param fName function name, which will be called
        /// \param args Arguments passed to the function
        /// \return returns the result of the function being called
        template< typename Func_T, typename ... Args_T>
        inline details::function_info_rt<Func_T> callProcAddrName(const std::string &fName, Args_T &&...args) const {
            return callProcAddr<Func_T>(getProcAddr<Func_T>(fName), std::forward<Args_T>(args)...)  ;
        }
/// the abbreviation of function LogicalDevice::callProcAddrName,
/// which allows not to write the name of the called function twice
#define callDeviceProcAddr(device, func, ...) (device).callProcAddrName<PFN_ ## func>(#func, __VA_ARGS__)
/// the abbreviation of function LogicalDevice::getProcAddr,
/// which allows not to write the name of the called function twice
#define getDeviceProcAddr(device, func) (device).getProcAddr<PFN_ ## func>(#func)
    };//class DeviceCore


    class LogicalDevice final : public DeviceCore
    {
        const Instance *m_instance = {};
        std::map< std::pair< uint32_t, uint32_t >, Queue > m_queues;
        std::unordered_map< std::string, std::unique_ptr<DeviceExtensionBase> > m_extensions;

    public:
        const PhysicalDevice physicalDevice;
        const VkPhysicalDeviceFeatures features;

    public:
        LogicalDevice(const Instance &instance, const PhysicalDevice &device
                      , const VkPhysicalDeviceFeatures &features
                      , const std::vector< std::string > &extensions
                      , const std::vector< VkDeviceQueueCreateInfo > &queues);

    public:
        Queue atQueue(uint32_t family, uint32_t index) const;

        void waitIdle() const;

        //TODO паттерн фабрики (для легкого переключения между реализациями аллокаторов)
        std::unique_ptr<IAllocator> createAllocator();

        template< class T >
        T *getExtension() const { return &(dynamic_cast<T &>(*m_extensions.at(T::str()).get())); }
    };// class LogicalDevice

} // namespace HLGK