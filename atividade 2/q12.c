#include <stdio.h>

int main() {
    int ano;
    printf("Digite o valor do ano:\n");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Ano é bissexto\n");
    } else {
        printf("Ano não é bissexto\n");
    }

    return 0;
}

