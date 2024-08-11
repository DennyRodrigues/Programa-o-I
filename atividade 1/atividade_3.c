#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    float d;
    printf("Média aritmética de 3 números\n");
    printf("Digite um número\n");
    scanf("%d", &a);
    printf("Digite outro número\n");
    scanf("%d", &b);
    printf("Digite outro número\n");
    scanf("%d", &c);
    d = (a + b + c)/3.0;


    printf("Media =  %.2f\n", d);

    return 0;
}
