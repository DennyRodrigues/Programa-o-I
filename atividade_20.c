#include <stdio.h>

int main() {
    float a;
    float b;
    float result;
    printf("Digite o valor da Força \n");
    scanf("%f", &a);
    printf("Digite o valor do Área \n");
    scanf("%f", &b);
    result = a/b;

    printf("A pressão é %.2f\n", result);

    return 0;
}
