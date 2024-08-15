#include <stdio.h>

int main() {
    int a, b;
    float result;
    char operacao;
printf("Calculadora:\n");
    printf("Digite dois valores:\n");
    scanf("%d %d", &a, &b);

    while (getchar() != '\n'); 

    printf("Digite a operação (+, -, *, /):\n");
    scanf("%c", &operacao);

    switch (operacao) {
        case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
            printf("Operação inválida!\n");
            break;
    }
    printf("O resultado é %.f", result);
    return 0;
}

