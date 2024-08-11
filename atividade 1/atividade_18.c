#include <stdio.h>

int main() {
    float a;
    float b;
    float result;
    printf("Digite o valor do peso   \n");
    scanf("%f", &a);
    printf("Digite o valor da altura  \n");
    scanf("%f", &b);
    result = a/(b*b);

    printf("O IMC é: %.2f\n", result);

    return 0;
}
