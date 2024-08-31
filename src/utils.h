#ifndef UTILS
#define UTILS

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "window/common.h"
#include "window/ui/common.h"

#define CLEAR() printf("\033[H\033[J")
#define GOTO_XY(x, y) printf("\033[%d;%dH", (y), (x))

void utils_log(const char *msg);
void utils_outat(struct dcli_window *w, unsigned int x, unsigned int y, const int *s, unsigned int r, unsigned int g, unsigned int b);

#endif
