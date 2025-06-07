#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double tiempo;

    start = clock();

    int x = 17, y;
    int p = x;

    printf("El valor de x es %d", p);
    y = p + 3;
    printf("\nEl valor de y es %d", y);

    end = clock(); // Fin de tiempo
    tiempo = (double)(end - start) * 1000 / CLOCKS_PER_SEC;
    printf("\nTiempo de ejecucion sin apuntador: %.3f ms\n", tiempo);

    return 0;
}





