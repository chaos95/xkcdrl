

#include <stdarg.h>

#include "xrcommon.h"


void error(char * fmt, ...) {
	va_list args;

	fprintf(stderr, "Error: ");	
	va_start(args, fmt);
	vfprintf(stderr, fmt, args);
	va_end(args);
	fprintf(stderr, "\n");
	
	exit(EXIT_FAILURE);	
}

