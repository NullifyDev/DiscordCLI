#ifndef UPDATE
#define UPDATE

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

#include "size.h"

inline static void window_updateSize(struct dcli_window *dw);

#endif