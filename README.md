# Height Level Graphics Kit

---
Project of tools for graphics

## Files Structure
As the development progresses, the folders will be separated into repositories

| Dir      |                                     Description                                     |
|:---------|:-----------------------------------------------------------------------------------:|
| Core     | Contains wrappers over graphics libraries. At the moment, only Vulkan is available. |
| ->Vulkan |                                 Wrapper over Vulkan                                 |
| Window   |                              Contains window managers                               |
| ->glfw   |                                 Wrapper over GLFW3                                  |

## Build

### Unix

`mkdir build & cd build` \
`cmake ..` \
`cmake --build .`

### Windows

`mkdir build & cd build` \
If you have written all the library paths in the PATH with the handles, 
then you can not specify the `-DCMAKE_TOOLCHAIN_FILE` \
It is for `glm`, `glfw` \
`cmake .. -DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake` \
`cmake --build .`