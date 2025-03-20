#include <stdio.h>
#include <stdlib.h>
int main() {
    int antiguedad;
    float sueldo, X;
    printf("Años de antigüedad: ");
    scanf("%d", &antiguedad);
    printf("Sueldo mensual: ");
    scanf("%f", &sueldo);
    X = sueldo * 0.1;
    if (antiguedad >= 5) {
        if (X >= 1000)
        printf("Tu puedes obtener el crédito FELICIDADES.\n");
        else
        printf("No puede obtener tu crédito.\n");
    } else {
        printf("No puede obtener tu crédito.\n");
    }
    printf("Fin del programa\n");
    system("Pause");
    return 0;
}