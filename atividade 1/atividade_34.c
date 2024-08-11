#include <stdio.h>
#include <math.h>

int main() {
    float futuro, taxa, periodos;
    float resultado;
    printf("Digite o valor futuro de um investimento, a taxa de juros e o número de períodos  ");
    scanf("%f %f %f", &futuro, &taxa, &periodos);

    resultado = futuro / pow((1 + taxa/100), periodos) ;
    printf("O valor presente é: %.2f\n", resultado);

    return 0;
}
