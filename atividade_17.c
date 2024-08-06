#include <stdio.h>

int main() {
    float a;
    float b;
    float result;
    printf("Digite o valor da massa  \n");
    scanf("%f", &a);
    printf("Digite o valor do volume  \n");
    scanf("%f", &b);
    result = a/b;

    printf("A densidade é %.2f\n", result);

    return 0;
}
