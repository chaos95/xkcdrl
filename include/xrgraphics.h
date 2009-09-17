
#ifndef __XR_GRAPHICS_H__
#define __XR_GRAPHICS_H__

#include "xrcommon.h"
#include <GL/glfw.h>


typedef struct xrwindow_struct {
	char * title;
	unsigned int width;
	unsigned int height;
} xrwindow;


bool          window_created;
xrwindow    * main_window;

void window_create(char * title, unsigned int width, unsigned int height);
void window_close();

//SDL_Surface * load_image(char * filename);



#endif
