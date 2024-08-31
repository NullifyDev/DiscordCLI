#include "update.h"

void window_updateSize(struct dcli_window *dw)
{
    dw->prevsize = dw->currsize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, dw->currsize);
}
