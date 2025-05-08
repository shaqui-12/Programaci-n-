#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    char cad[20];
    printf("Ingresa una palabra: ");
    scanf("%s", cad);
    n = strlen(cad);
    for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
    printf("*");
        }
    printf("\n");
    }
    return 0;
}