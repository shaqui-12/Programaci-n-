#include <stdio.h>

float maximo(float a, float b);

int main() {
    float a, b, mayor;
    printf("Ingresa el primer número: ");
    scanf("%f", &a);
    printf("Ingresa el segundo número: ");
    scanf("%f", &b);
    mayor = maximo(a, b);
    printf("El número mayor es: %.2f\n", mayor);
    return 0;
}
float maximo(float a, float b) {
    if (a > b)
        return a;
    return b;
}