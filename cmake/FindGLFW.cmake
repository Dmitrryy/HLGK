#
# Find GLFW
#
# Try to find GLFW library.
# This module defines the following variables:
# - GLFW_INCLUDE_DIRS
# - GLFW_LIBRARIES
# - GLFW_FOUND
#
# The following variables can be set as arguments for the module.
# - GLFW_ROOT_DIR : Root library directory of GLFW
# - GLFW_USE_STATIC_LIBS : Specifies to use static version of GLFW library (Windows only)
#
# References:
# - https://github.com/progschj/OpenGL-Examples/blob/master/cmake_modules/FindGLFW.cmake
# - https://bitbucket.org/Ident8/cegui-mk2-opengl3-renderer/src/befd47200265/cmake/FindGLFW.cmake
#

#[[# Additional modules
include(FindPackageHandleStandardArgs)]]

if (WIN32)
    # Find include files
    find_path(
            GLFW_INCLUDE_DIR
            NAMES GLFW/glfw3.h
            PATHS
            $ENV{PROGRAMFILES}/include
            $ENV{GLFW_ROOT_DIR}/include
            DOC "The directory where GLFW/glfw.h resides")

    # Use glfw3.lib for static library
    if (GLFW_USE_STATIC_LIBS)
        set(GLFW_LIBRARY_NAME glfw3)
    else()
        set(GLFW_LIBRARY_NAME glfw3dll)
    endif()

    # Find library files
    # FIXME: always find glfw3dll.lib. WHY?!?!??!
#[[    find_library(GLFW_LIBRARY
            #NAMES ${GLFW_LIBRARY_NAME}
            PATHS
            $ENV{PROGRAMFILES}/lib
            $ENV{GLFW_ROOT_DIR}/lib

            NO_CACHE
            NO_DEFAULT_PATH)]]
    set(GLFW_LIBRARY $ENV{GLFW_ROOT_DIR}/lib/libglfw3.a)
    # END FIXME

    unset(GLFW_LIBRARY_NAME)

    if (GLFW_LIBRARY AND GLFW_INCLUDE_DIR)
        set(GLFW_FOUND "YES")
        set(GLFW_LIBRARIES ${OPENGL_LIBRARIES} ${GLFW_LIBRARY})
        set(GLFW_INCLUDE_DIRS ${GLFW_INCLUDE_DIR})
    endif()
else()
    find_package(glfw)
endif()

# Hide some variables
mark_as_advanced(GLFW_INCLUDE_DIR GLFW_LIBRARY)