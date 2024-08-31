#include "resize.h"

inline static bool window_hasResized(struct dcli_window *dw)
{
    return dw->prevsize.x != dw->currsize.x || dw->prevsize.y != dw->currsize.y;
}