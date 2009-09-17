

#include "xrgraphics.h"


bool          window_created = false;
xrwindow    * main_window    = NULL;
SDL_Surface * screen         = NULL;


void window_create(char * title, unsigned int width, unsigned int height) {

	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		error("Failed to initialize SDL");
		return;	
	}
	
	main_window = new(xrwindow);
	
	main_window->title = title;
	main_window->width = width;
	main_window->height = height;
	
	screen = SDL_SetVideoMode(width, height, 8, SDL_SWSURFACE);
	
	if (screen == NULL) {
		error("Failed to set SDL video moe");
		return;
	}
	
	SDL_WM_SetCaption(title, title);

}


void window_close() {



}

