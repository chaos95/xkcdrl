

#include "xrgraphics.h"


bool          window_created = false;
xrwindow    * main_window    = NULL;

GLuint num_tiles_x = 20;
GLuint num_tiles_y = 20;


void window_create(char * title, unsigned int width, unsigned int height) {

	if (glfwInit() != GL_TRUE) {
		error("Failed to initialize GLFW");
		return;	
	}
	
	main_window = new(xrwindow);
	
	main_window->title = title;
	main_window->width = width;
	main_window->height = height;
	
	if (glfwOpenWindow(width, height, 5, 6, 5, 0, 8, 0, GLFW_WINDOW) != GL_TRUE) {
		error("Failed to open GLFW window");
		return;
	}
	
	glfwSetWindowTitle(title);

}

void window_close() {
	delete(main_window);
	glfwTerminate();
}


void window_setup_drawing(char * tilemap_image) {
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho (0, num_tiles_x, num_tiles_y, 0, 0, 1);
	
	glDisable(GL_DEPTH_TEST);
	glEnable(GL_TEXTURE_2D);
	
	glBindTexture (GL_TEXTURE_2D, GFX_TILESET_ID);
	
	glfwLoadTexture2D(tilemap_image, GLFW_ORIGIN_UL_BIT);
	
    glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    
    //glTexEnvf (GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

}










