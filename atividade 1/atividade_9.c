#include <stdio.h>

int main() {
    int c;
    float result;

    printf("Converta graus Fahrenheit para Celsius \n");
    printf("Digite o Fahrenheit \n");
    scanf("%d", &c);
    result = (c - 32) * 5/9;

    printf("Fahrenheit  = %.2f\n", result);

    return 0;
}
