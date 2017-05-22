// Launcher.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

#include <stdio.h>
#include <stdlib.h>

#include <GL\glew.h>
#include <GL\GLU.h>
#include <GL\GL.h>
#include <GLFW\glfw3.h>


double version = 1.0;

int main()
{

	std::setprecision(1);
	std::cout << "starting Serrated Savior Launcher version " << version << std::endl;	

	//setup openGL with GLFW
	if (!glfwInit()) {
		fprintf(stderr, "GLFW library failed to initialize");
		return -1;
	}
	
	glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // We want OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //We don't want the old OpenGL 

	GLFWwindow * window;
	if ( !(window = glfwCreateWindow(1000, 600, "Serrated Savior", nullptr, nullptr)) ) {
		fprintf(stderr, "error, GPU incompatible with this version of OpenGL");
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	glewExperimental = true;

	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW");
		return -1;
	}

    return 0;
}

