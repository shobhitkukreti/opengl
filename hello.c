#include <GLFW/glfw3.h>
#include <stdio.h>

int main(){
	if (!glfwInit())
{
    printf("glfwinit failed\n");
}

glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // We want OpenGL 3.3
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // We don't want the old OpenGL 

GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
if (!window)
{
    printf("glfwinit failed\n");
    // Window or OpenGL context creation failed
}
glfwMakeContextCurrent(window);

int width, height;
//glfwGetFramebufferSize(window, &width, &height);
//glViewport(0, 0, width, height);

glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
glfwWindowShouldClose(window) == 0 )
{
    // Keep running
    glfwSwapBuffers(window);
}


glfwDestroyWindow(window); // end window context
glfwTerminate(); //end of rendering
return 0;
}