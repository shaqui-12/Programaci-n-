#include <stdio.h>

int main() {
    // Cálculo para el a
    int num_a = (1*10 + 3*6 + 1); 
    int den_a = 30;

    // Cálculo para el b
    int num_b = 5 * 4 + 2 * 4;  
    int den_b_interno = 2 * 4 - 1;
    int den_b = 1 * 4 + (2 * 4 / den_b_interno);
    int resultado_b = (num_b / den_b);  //

    // Mostrar resultados
    printf("a) Resultado: %d/%d\n", num_a, den_a);  
    printf("b) Resultado: %d\n", resultado_b);  

    return 0;
}