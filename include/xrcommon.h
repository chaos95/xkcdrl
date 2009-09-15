
#ifndef __XR_COMMON_H__
#define __XR_COMMON_H__

/**
 * Should be included by most files, provides utilities and other crap
 */


#include <assert.h>

// convenience memory management funcs
#define new(obj) ((obj *)malloc(sizeof(obj)));
#define delete(x) free(x); x = null;


typedef unsigned char byte;


#endif
