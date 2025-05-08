#include <stdio.h>
#include <string.h>
int main() {
char pal1[50];
char pal2[50];
int n;
printf("ingresa la primera: ");
scanf ("%s", &pal1);
printf("ingresa la segunda: ");
scanf ("%s", &pal2);
    n=strlen(pal1);
    for(int i = 0; i < n; i++) {
    strcat(pal1, pal2);
}
    printf("Esto es: %s", pal1);
    return 0;
}

