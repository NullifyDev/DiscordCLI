#include "main.h"

#include <stdio.h>

int main()
{
    printf("Hello! :D");
    struct dcli_window *dw = malloc(sizeof(struct dcli_window));

    CLEAR();
    GOTO_XY(1, 1);

    printf("%d:%d", dw->currsize.x, dw->prevsize.y);
    while (1) {
        window_updateSize(dw);
        if (window_hasResized(dw)) {
            GOTO_XY(1,1);
            printf("%d:%d", dw->currsize.x, dw->currsize.y);
        }
    }
    // printf("%d:%d\n", w->currsize.x, w->currsize.y);

    //              window  x   y    w   h   r   g    b
    // ui_drawRectangle(dw, 5,  5,  10, 10, 125, 125, 125);
    // ui_drawRectangle(dw, 10, 10, 10, 10, 255, 255, 255);

    printf("\n");
    free(dw);

    return 0;
}