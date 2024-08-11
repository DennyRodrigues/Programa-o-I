#include <stdio.h>

int main() {
    float c;
    int result;

    printf("valor em horas e o converta para minutos \n");
    printf("Digite o valor em Horas  \n");
    scanf("%f", &c);
    result = c * 60;

    printf("O valor em minutos é: %d\n", result);

    return 0;
}
