#include <stdio.h>
int main() {
    int num = 1;
    while (num < 1000) {
    if (num % 3 == 0) {
    printf("%d ", num);
        }
    num++;
    }
    return 0;
}