
#ifndef __XR_GRAPHICS_H__
#define __XR_GRAPHICS_H__

#include "xrcommon.h"
#include <SDL/SDL.h>


typedef struct xrwindow_struct {
	char * title;
	unsigned int width;
	unsigned int height;
} xrwindow;


bool          window_created;
xrwindow    * main_window;
SDL_Surface * screen;



void window_create(char * title, unsigned int width, unsigned int height);
void window_close();



#endif
