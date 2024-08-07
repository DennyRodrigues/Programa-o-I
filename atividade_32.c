#include <stdio.h>

int main() {
    float populacaoInicial, populacaoFinal, anos;
    float resultado;
    printf("Digite a populacao Inicial, populacao final e o número de anos  ");
    scanf("%f %f %f", &populacaoInicial, &populacaoFinal, &anos);

    resultado = ((populacaoFinal - populacaoInicial)/populacaoInicial) * 100.0 / anos;
    printf("A taxa de crescimento é: %.2f\n", resultado);

    return 0;
}
