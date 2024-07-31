#include "../include/glad/glad.h"
// #include "KHR/khrplatform.h"
#include <GLFW/glfw3.h>
#include <iostream>


int main() {
  glfwInit();

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow* window = glfwCreateWindow(800, 800, "polyGLow", NULL, NULL);

  if (window == NULL) {
	std::cout << "Erm, what the sigma" << std::endl;
	glfwTerminate();

	return -1;
  }

  glfwMakeContextCurrent(window);

  gladLoadGL();

  glViewport(0, 0, 800, 800);

  glClearColor(0.07f, 0.13f, 0.17f, 1.0f);

  glClear(GL_COLOR_BUFFER_BIT);

  glfwSwapBuffers(window);

  while (!glfwWindowShouldClose(window)) {
	glfwPollEvents();
  }

  glfwDestroyWindow(window);

  glfwTerminate();
  
  return 0;
}
