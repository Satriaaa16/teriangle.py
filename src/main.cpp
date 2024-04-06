#include <iostream>
#include <GLFW/glfw3.h>

int main (int, char**){

    GLFWwindow* window;

    if (!glfwInit()) {
        return -1;
    }

    window = glfwCreateWindow(640, 480, "Window!", NULL,NULL);
    glfwMakeContextCurrent(window);

    /*
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout<<"gabisa oppen gl" << std::endl;
        glfwTerminate();
        return -1;
    }
    
    */

   while(!glfwWindowShouldClose(window)){
    glfwPollEvents();

    //glClear(GL_COLOR_BUFFER_BIT);
    
    glfwSwapBuffers(window);
   }

   glfwTerminate();
   return 0;
}
