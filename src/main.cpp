#include <iostream>
#include "KHR/khrplatform.h"
#include <GLFW/glfw3.h>

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

  glfwTerminate();
  
  return 0;
}
