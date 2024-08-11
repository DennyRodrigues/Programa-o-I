#include <stdio.h>

int main() {
    float a;
    float result;
    printf("Digite o valor em Quilômetros    \n");
    scanf("%f", &a);
    result = a * 0.621371;

    printf("O valor em milhas é: %.2f\n", result);

    return 0;
}
