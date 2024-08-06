#include <stdio.h>

int main() {
    int c;
    float result;

    printf("Valor em quilogramas e o converta para libras \n");
    printf("Digite o valor em quilogramas  \n");
    scanf("%d", &c);
    result = c * 2.20462;

    printf("Libras   = %.2f\n", result);

    return 0;
}
