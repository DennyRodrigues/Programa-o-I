#include <stdio.h>
#include <math.h>

int main() {
    int catetoA;
    int catetoB;
    float hipotenusa;

    printf("fórmula Hipotenusa \n");
    printf("Digite valor do cateto A\n");
    scanf("%d", &catetoA);
    printf("Digite valor do cateto B\n");
    scanf("%d", &catetoB);
    // sqrt(cateto1^2 + cateto2^2).
    hipotenusa =  sqrt(pow(catetoA, 2) + pow(catetoB, 2));

    printf("Produto = %.2f\n", hipotenusa);

    return 0;
}
