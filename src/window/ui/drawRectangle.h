#ifndef DRAW_RECTANGLE
#define DRAW_RECTANGLE

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "../../utils.h"

void ui_drawRectangle(struct dcli_window *dw, int x, int y, int w, int h, unsigned char r, unsigned char g, unsigned char b);

#endif