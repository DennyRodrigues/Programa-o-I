#include <stdio.h>
#include <math.h>


int main() {
    float a;
    float result;
    printf("Digite o valor da aresta \n");
    scanf("%f", &a);
    result = pow(a, 3);

    printf("O volume do cubo é: %.2f\n", result);

    return 0;
}
