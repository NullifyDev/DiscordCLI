#include "drawRectangle.h"

void ui_drawRectangle(struct dcli_window *dw, int x, int y, int w, int h, unsigned char r, unsigned char g, unsigned char b)
{
    x *= 2;
    w *= 2;

    for (int ly = y; ly < h + y; ly++)
    {

        GOTO_XY(x, ly);
        printf("\033[48;2;%d;%d;%dm", r, g, b);

        for (int lx = x; lx < w + x; lx++)
        {
            printf(" ");
        }
        printf("\033[0m");
    }
}
