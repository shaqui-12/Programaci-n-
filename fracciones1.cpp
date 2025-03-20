#include <stdio.h>

int main() {
    double fraccion1, fraccion2, fraccion3, resultado_a, resultado_b;
    
    fraccion1 = 1.0 / 3.0;
    fraccion2 = 2.0 / 5.0;
    fraccion3 = 1.0 / 30.0;
    
    resultado_a = (fraccion1 + fraccion2 + fraccion3) / (23.0 / 30.0);
    
    resultado_b = (2.0 / 1.0) + (1.0 / 2.0) + 6.78;

    printf("Resultado de a) (1/3 + 2/5 + 1/30) ÷ 23/30 = %.4f\n", resultado_a);
    printf("Resultado de b) 2/1 + 1/2 + 6.78 = %.2f\n", resultado_b);

    return 0;
}