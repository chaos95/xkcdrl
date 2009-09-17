
#ifndef __XR_GRAPHICS_H__
#define __XR_GRAPHICS_H__

#include "xrcommon.h"
#include <GL/glfw.h>


typedef struct xrwindow_struct {
	char * title;
	GLuint width;
	GLuint height;
} xrwindow;


bool       window_created;
xrwindow * main_window;


GLuint num_tiles_x;
GLuint num_tiles_y;



void window_create(char * title, GLuint width, GLuint height);
void window_close();

void window_enter2d();




#endif
