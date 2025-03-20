#include <stdio.h>

int main() {
    int w = 9, x = 3, y = 7, z = -2;

    printf("1) %d\n", (x < y) && (w > z));
    printf("2) %d\n", (x >= w) ^ (z == y));
    printf("3) %d\n", (y <= x) || (x != w));
    printf("4) %d\n", (w == 9) ^ (x == 3));
    printf("5) %d\n", (y > z) && (z < x));
    printf("6) %d\n", !(w != 9));

    return 0;
}