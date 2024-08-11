#include <stdio.h>

int main() {
    float a;
    float b;
    float result;
    printf("Digite o valor da distância\n");
    scanf("%f", &a);
    printf("Digite o valor do tempo \n");
    scanf("%f", &b);
    result = a/b;

    printf("A velocidade média é %.2f\n", result);

    return 0;
}
