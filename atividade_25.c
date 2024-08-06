#include <stdio.h>
int main() {
    float f;
    float d;
    float result;
    printf("Digite o valor da Força\n");
    scanf("%f", &f);
    printf("Digite o valor da Distância\n");
    scanf("%f", &d);
    result = f * d;

    printf("O trabalho é: %.2f\n", result);

    return 0;
}
