#include <stdio.h>

int main() {
    int valor;
    printf("Digite o valor:\n");
    scanf("%d", &valor);

    if (valor % 2 == 0 && valor % 3 == 0 && valor % 5 == 0 ) {
        printf("Valor é dívisivel por 2, 3, 5");
    } else {
        printf("Valor NÃO é dívisivel por 2, 3, 5");
    }

    return 0;
}

