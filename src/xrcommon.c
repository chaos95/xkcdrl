

#include <stdarg.h>

#include "xrcommon.h"


void error(char * fmt, ...) {
	va_list args;

	fprintf(stdout, "Error: ");	
	va_start(args, fmt);
	vfprintf(stdout, fmt, args);
	va_end(args);
	fprintf(stderr, "\n");
	
	exit(EXIT_FAILURE);	
}

