#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Produto de dois números inteiros\n");
    printf("Digite um número\n");
    scanf("%d", &a);
    printf("Digite outro número\n");
    scanf("%d", &b);
    c = a * b;


    printf("Produto = %d\n", c);

    return 0;
}
