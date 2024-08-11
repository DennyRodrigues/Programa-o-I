#include <stdio.h>

int main() {
    int a;
    int b;
    float c;

    printf("Área de triângulo \n");
    printf("Digite a altura\n");
    scanf("%d", &a);
    printf("Digite a base\n");
    scanf("%d", &b);
    c = (a * b)/2.0;

    printf("Área = %.1f\n", c);

    return 0;
}
