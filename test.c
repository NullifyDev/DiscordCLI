#include <stdio.h>
int main() {
    printf("\033[48;2;125;125;125m");
    printf("Hello World!");
    printf("\033[0m");
    return 0;
}