#include <stdio.h>
#include <math.h>

int main() {
    float lados, medida;
    float resultado;
    printf("Digite o número de lados de um polígono regular e a medida de um lado");
    scanf("%f %f", &lados, &medida);

    resultado = lados * medida;
    printf("O perímetro do polígono é %.0f\n", resultado);

    return 0;
}
