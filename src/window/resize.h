#ifndef RESIZE
#define RESIZE

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#include "size.h"
#include "window.h"

bool window_hasResized(struct dcli_window *dw);

#endif
