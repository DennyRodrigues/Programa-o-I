#include <stdio.h>
#include <math.h>

int main() {
    float altura, raio;
    float resultado;
    printf("Digite a altura e o raio de um cilindro para calcular o volume");
    scanf("%f %f", &altura, &raio);

    resultado = 3.14 * altura * pow(raio, 2);
    printf("O volume do cilindro é %.3f\n", resultado);

    return 0;
}
