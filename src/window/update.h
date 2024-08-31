#ifndef UPDATE
#define UPDATE

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

#include "window.h"

void window_updateSize(struct dcli_window *dw);

#endif
