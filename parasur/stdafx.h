// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <gl/glew.h>
#include <math.h>
#include <vector>

struct  oper {
	int com;
	int num1, num2, num3;
};


struct express {
	double ul, uh, vl, vh;
	oper *ox, *oy, *oz;
	int nox, noy, noz;
	double *cx, *cy, *cz;
	int outx, outy, outz;
};

// TODO: reference additional headers your program requires here
