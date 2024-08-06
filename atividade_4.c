#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Área de retângulo\n");
    printf("Digite a altura\n");
    scanf("%d", &a);
    printf("Digite a largura\n");
    scanf("%d", &b);
    c = a * b;


    printf("Área = %d\n", c);

    return 0;
}
