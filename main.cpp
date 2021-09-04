#include <iostream>

#include <HLGK/Core/Factory.hpp>
#include <HLGK/Window/glfw/Window.hpp>

int main() {
    vk::ApplicationInfo info;
    info.pApplicationName = nullptr;
    info.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    info.pEngineName = "No Engine";
    info.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    info.apiVersion = VK_API_VERSION_1_2;


    std::vector< std::string > extensions = {
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            VK_KHR_SURFACE_EXTENSION_NAME
    };
    std::vector< std::string > validationLayers = {
            "VK_LAYER_KHRONOS_validation"
    };
    HLGK::Factory factory(info, extensions, validationLayers);

    auto&& devices = factory.getPhysicalDevices();

    size_t i = 0;
    for (auto&& d : devices) {
        auto&& prop = d.getProperties();
        std::cout << "[" << i++ << "] " << to_string(prop.deviceType) << std::endl;
        std::cout << "Name: " << prop.deviceName << std::endl;
        std::cout << "ID: " << prop.deviceID << std::endl;
        std::cout << "API version: " << VK_VERSION_MAJOR(prop.apiVersion) << '.'
                                        << VK_VERSION_MINOR(prop.apiVersion) << '.'
                                        << VK_VERSION_PATCH(prop.apiVersion) << std::endl;
        std::cout << "Driver version: " << prop.driverVersion << std::endl;
        std::cout << "==--------------------------------------==" << std::endl;
    }

    //-----------------------------------------------
    // create window
    std::vector< std::pair< int, int > > hints = {
            {GLFW_CLIENT_API, GLFW_NO_API},
            {GLFW_RESIZABLE,  GLFW_FALSE}
    };

    HLGK::glfw::Window window(800, 800
            , "HLGK"
            , nullptr, nullptr
            , hints);

    window.setInputMode(GLFW_STICKY_KEYS, 1);
    window.setInputMode(GLFW_CURSOR, GLFW_CURSOR_HIDDEN);

    const int wHeight = window.getHeight();
    const int wWidth = window.getWidth();
    window.setCursorPosition(wWidth / 2.0, wHeight / 2.0);
    // end create window
    //-----------------------------------------------

    auto&& surface = factory.createSurface(window);


    return 0;
}
