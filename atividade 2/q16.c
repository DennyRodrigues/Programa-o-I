#include <stdio.h>

int main() {
    float altura, peso, IMC;
    printf("Digite a altura e o peso:\n");
    scanf("%f %f", &altura, &peso);

    IMC = peso/(altura * altura);

    if (IMC < 18.5) {
        printf("Classificação pelo IMC é de Magreza");
    } else if (IMC < 25) {
        printf("Classificação pelo IMC é de indica Normal");
    }else if (IMC < 30) {
        printf("Classificação pelo IMC é de indica Sobrepeso");
    } else if (IMC < 40) {
        printf("Classificação pelo IMC é de indica Obesidade");
    }

    return 0;
}

