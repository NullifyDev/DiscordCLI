#include "main.h"

int main()
{
    // void *mem = malloc(512);
    // struct dcli_window dw;

    struct dcli_window *dw = malloc(sizeof(struct dcli_window));

    CLEAR();
    GOTO_XY(1, 1);
    while (1);

    window_updateSize(dw);
    printf("%d:%d", dw->currsize.x, dw->prevsize.y);
    // printf("%d:%d\n", w->currsize.x, w->currsize.y);
    //            window  x   y    w   h   r   g    b

    // ui_drawRectangle(w, 5,  5,  10, 10, 125, 125, 125);
    // ui_drawRectangle(w, 10, 10, 10, 10, 255, 255, 255);

    printf("\n");
    free(dw);

    return 0;
}