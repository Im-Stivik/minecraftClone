#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    // Initialize GLFW
    glfwInit();

    //give GLFW the OpenGL version
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create a window object
    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Initialize GLAD
    gladLoadGL();

    //specify the viewport dimensions
    glViewport(0, 0, 800, 600);

    //specify the background color
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    //clear the color buffer and assign the background color
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window)) {
        // Poll for and process events
        glfwPollEvents();

        // Swap front and back buffers
        glfwSwapBuffers(window);
    }
}
