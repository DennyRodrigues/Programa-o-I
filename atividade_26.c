#include <stdio.h>
int main() {
    float a;
    float b;
    float result;
    printf("Digite o valor da trabalho \n");
    scanf("%f", &a);
    printf("Digite o valor do tempo gasto \n");
    scanf("%f", &b);
    result = a / b;

    printf("A potência é: %.2f\n", result);

    return 0;
}
