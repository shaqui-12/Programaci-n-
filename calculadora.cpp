#include <stdio.h>
int main() {
    int op;
    float n1, n2, res;
    printf("Escribe dos numeros\n");
    scanf("%f %f", &n1, &n2);
    printf("Seleccione una opcion\n");
    printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n");
    scanf("%i", &op);
    switch (op) {
        case 1:
            res = n1 + n2;
            printf("\nLa suma es: %.1f", res);
            break;
        case 2:
            res = n1 - n2;
            printf("\nLa resta es: %.1f", res);
            break;
        case 3:
            res = n1 * n2;
            printf("\nLa multiplicacion es: %.1f", res);
            break;
        case 4:
            res = n1 / n2;
            printf("\nLa division es: %.1f", res);
            break;
        default:
            printf("\nEsa no es una opcion");
    }
    return 0;
}