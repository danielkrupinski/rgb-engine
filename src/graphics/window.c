#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdlib.h>
#include "graphics/window.h"

void graphicsCreateWindow(void)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(800, 600, "OpenGL 4.6 Window", NULL, NULL);

    if (!window) {
        fprintf(stderr, "Failed to create GLFW window!");
        glfwTerminate();
        exit(1);
    }

    glfwMakeContextCurrent(window);
}
