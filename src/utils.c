#include "utils.h"

void utils_log(const char *msg)
{
    FILE *fptr = fopen("verbose.log", "a+");
    fprintf(fptr, "%s\n", msg);
    fclose(fptr);
    printf("%s", msg);
}

void utils_outat(struct dcli_window *w, unsigned int x, unsigned int y, const int *s, unsigned int r, unsigned int g, unsigned int b)
{
    if (x > w->currsize.x)
    {
        utils_log("X position is out of bounds");
        return;
    }
    if (y > w->currsize.y)
    {   
        utils_log("Y position is out of bounds");
        return;
    }
    // printf("\033[%d;%dH%;48;2;%d;%d;%d%s\033[0m", x, y, s);
    // printf("\033[%d;%dH", x, y);
}