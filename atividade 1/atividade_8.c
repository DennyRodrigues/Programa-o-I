#include <stdio.h>

int main() {
    int c;
    float result;

    printf("Converta graus Celsiu para Fahrenheit \n");
    printf("Digite o celsius  \n");
    scanf("%d", &c);
    result = (c * 9/5) + 32;

    printf("Fahrenheit  = %.2f\n", result);

    return 0;
}
