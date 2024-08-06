#include <stdio.h>

int main() {
    float a;
    float result;
    printf("Digite o valor em milhas \n");
    scanf("%f", &a);
    result = a / 0.621371;

    printf("O valor em quilômetros  é: %.2f\n", result);

    return 0;
}
