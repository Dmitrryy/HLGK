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

## Open issues
- [ ] the mechanism of forwarding access to the pNext field in structures. (Required when using extensions)
- [ ] Some classes have a reference/pointer field to device.
- [ ] Pipeline, Shaders
- [ ] Memory: buffer, image
- [ ] ability to create classes that will refer to the same memory area