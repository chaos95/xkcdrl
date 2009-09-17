
#ifndef __XR_COMMON_H__
#define __XR_COMMON_H__

/**
 * Should be included by most files, provides utilities and other crap
 */

#include <stdlib.h>
#include <stdio.h>



void error(char * fmt, ...);


/* convenience memory management funcs */
#define new(obj) ((obj *) malloc(sizeof(obj)));
#define delete(x) free(x);  x = NULL;


typedef unsigned char  byte;
typedef unsigned int   uint;

typedef unsigned int  bool;

#define true 1
#define false 0


#endif
