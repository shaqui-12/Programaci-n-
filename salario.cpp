#include <stdio.h>
int main() {
    float HST, PH, salario;
    printf("Ingrese las horas: ");
    scanf("%f", &HST);
    printf("Ingrese el precio por hora: ");
    scanf("%f", &PH);
    if (HST <= 40) {
        salario = HST * PH;
    } else {
        salario = (40 * PH) + ((HST - 40) * (PH * 1.5));
    }
    printf("El salario semanal es: %.2f\n", salario);

    return 0;
}