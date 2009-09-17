

#include "xrgraphics.h"


bool          window_created = false;
xrwindow    * main_window    = NULL;


void window_create(char * title, unsigned int width, unsigned int height) {

	if (glfwInit() != GL_TRUE) {
		error("Failed to initialize GLFW");
		return;	
	}
	
	main_window = new(xrwindow);
	
	main_window->title = title;
	main_window->width = width;
	main_window->height = height;
	
	if (glfwOpenWindow(width, height, 5, 6, 5, 0, 0, 0, GLFW_WINDOW) != GL_TRUE) {
		error("Failed to open GLFW window");
		return;
	}
	
	glfwSetWindowTitle(title);

}

void window_close() {
	delete(main_window);
}


