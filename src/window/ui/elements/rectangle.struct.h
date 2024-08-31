#ifndef RECTANGLE_STRUCT
#define RECTANGLE_STRUCT

#include "text.struct.h"

struct rectangle {
    struct text_t text;
    int rX;
    int rY;
    char bg;
    char fg;
};

#endif
