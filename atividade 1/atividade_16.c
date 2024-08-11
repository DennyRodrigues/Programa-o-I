#include <stdio.h>

int main() {
    float c;
    int result;
    printf("Digite o valor em Minutos  \n");
    scanf("%f", &c);
    result = c * 60;

    printf("O valor em segundos é: %d\n", result);

    return 0;
}
