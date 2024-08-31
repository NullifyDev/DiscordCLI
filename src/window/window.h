#ifndef WINDOW
#define WINDOW

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

#include "size.h"

struct dcli_window
{
    struct size_t currsize;
    struct size_t prevsize;
};

#endif
