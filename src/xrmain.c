
/* Entry point, setting up game, etc */

#include <stdio.h>
#include "xrgraphics.h"


int main(int argc, char * argv[]) {

	bool running = true;

	window_create("XKCD Roguelike!", 640, 480);
	
	window_setup_drawing("test.tga");
	
	while( running )
	{

		glClear( GL_COLOR_BUFFER_BIT );


		glBegin(GL_QUADS);
			glTexCoord2i (0, 0);
			glVertex2i   (0, 0);
			
			glTexCoord2i (1, 0);
			glVertex2i   (10,  0);
			
			glTexCoord2i (1, 1);
			glVertex2i   (10, 10);
			
			glTexCoord2i (0, 1);
			glVertex2i   (0, 10);
		glEnd();

		glfwSwapBuffers();
		
		running = !glfwGetKey( GLFW_KEY_ESC ) &&
		          glfwGetWindowParam( GLFW_OPENED );
	}
	
	window_close();


}
