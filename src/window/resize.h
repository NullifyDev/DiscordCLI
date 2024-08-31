#ifndef RESIZE
#define RESIZE

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#include "window.h"
inline static bool window_hasResized(struct dcli_window *dw);

#endif
