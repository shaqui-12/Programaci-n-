#include <stdio.h>
#include <stdlib.h>

struct CD {
    char titulo[100];
    char artista[50];
    int num_can;
    int anio;
    float precio;
};

int main() {
    struct CD cd;

    printf("Ingresa el título: ");
    scanf("%s", cd.titulo);

    printf("Ingresa el artista: ");
    scanf("%s", cd.artista);

    printf("Número de canciones: ");
    scanf("%d", &cd.num_can);

    printf("Año: ");
    scanf("%d", &cd.anio);

    printf("Precio: ");
    scanf("%f", &cd.precio);


    printf("Título: %s\n", cd.titulo);
    printf("Artista: %s\n", cd.artista);
    printf("Canciones: %d\n", cd.num_can);
    printf("Año: %d\n", cd.anio);
    printf("Precio: %.2f\n", cd.precio);

    return 0;
}