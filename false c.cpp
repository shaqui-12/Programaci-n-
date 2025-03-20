#include <stdio.h>

int main() {
    printf("***** AND *****\n");
    printf(" true && true : %d\n", (1 && 1));
    printf(" true && false : %d\n", (1 && 0));
    printf(" false && true : %d\n", (0 && 1));
    printf(" false && false : %d\n", (0 && 0));

    printf("\n***** OR *****\n");
    printf(" true || true : %d\n", (1 || 1));
    printf(" true || false : %d\n", (1 || 0));
    printf(" false || true : %d\n", (0 || 1));
    printf(" false || false : %d\n", (0 || 0));

    printf("\n***** XOR *****\n");
    printf(" true ^ true : %d\n", (1 ^ 1));
    printf(" true ^ false : %d\n", (1 ^ 0));
    printf(" false ^ true : %d\n", (0 ^ 1));
    printf(" false ^ false : %d\n", (0 ^ 0));

    return 0;
}