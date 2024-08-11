#include <stdio.h>
#include <math.h>

int main() {
    float maior, menor;
    float resultado;
    printf("Digite o valor da diagonal maior e da diagonal menor de um losango");
    scanf("%f %f", &maior, &menor);

    resultado = (maior * menor)/2;
    printf("A área do losango é: %.2f\n", resultado);

    return 0;
}
