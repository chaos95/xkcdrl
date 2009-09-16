
#ifndef __XR_COMMON_H__
#define __XR_COMMON_H__

/**
 * Should be included by most files, provides utilities and other crap
 */

#include <stdlib.h>
#include <assert.h>

/* convenience memory management funcs */

#define new(obj) ((obj *) malloc(sizeof(obj)));
#define delete(x) free(x);  x = NULL;


typedef unsigned char byte;


#endif
