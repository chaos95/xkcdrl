
/* Entry point, setting up game, etc */

#include <stdio.h>
#include "xrgraphics.h"


int main(int argc, char * argv[]) {

	bool running = true;

	window_create("XKCD Roguelike!", 640, 480);
	
	window_enter2d();
	
	while( running )
	{

		glClear( GL_COLOR_BUFFER_BIT );


		glBegin(GL_QUADS);
			glColor3f(1.0f, 1.0f, 1.0f);
			glVertex2i(2,10);
			glVertex2i(2,15);
			glVertex2i(9,15);
			glVertex2i(9,10);
		glEnd();

		glfwSwapBuffers();
		
		running = !glfwGetKey( GLFW_KEY_ESC ) &&
		          glfwGetWindowParam( GLFW_OPENED );
	}
	
	window_close();


}
