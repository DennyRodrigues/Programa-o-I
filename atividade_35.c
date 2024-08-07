#include <stdio.h>
#include <math.h>

int main() {
    float presente, taxa, periodos;
    float resultado;
    printf("Digite o valor presente  de um investimento, a taxa de juros e o número de períodos  ");
    scanf("%f %f %f", &presente, &taxa, &periodos);

    resultado = presente * pow((1 + taxa/100), periodos) ;
    printf("O valor futuro é: %.2f\n", resultado);

    return 0;
}
