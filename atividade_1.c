#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Soma de dois números inteiros\n");
    printf("Digite um número\n");
    scanf("%d", &a);
    printf("Digite outro número\n");
    scanf("%d", &b);
    c = a + b;


    printf("A soma é: %d\n", c);

    return 0;
}
