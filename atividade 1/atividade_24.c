#include <stdio.h>

int main() {
    float m;
    float d;
    float result;
    printf("Digite o valor da Massa \n");
    scanf("%f", &m);
    printf("Digite o valor da Aceleração\n");
    scanf("%f", &d);
    result = m * d;

    printf("A força é: %.2f\n", result);

    return 0;
}
