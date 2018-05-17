#include <glad/glad.h>
#include <stdio.h>
#include "graphics/glad.h"

void graphicsInitializeGlad(void)
{
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        fprintf(stderr, "Failed to initialize GLAD!\n");
}
