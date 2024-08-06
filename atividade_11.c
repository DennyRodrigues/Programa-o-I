#include <stdio.h>

int main() {
    float c;
    float result;

    printf("Valor em metros e o converta para pés \n");
    printf("Digite o valor em metros  \n");
    scanf("%f", &c);
    result = c * 3.28084;

    printf("pés = %.2f\n", result);

    return 0;
}
