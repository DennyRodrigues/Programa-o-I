#include <stdio.h>
#include <math.h>

int main() {
    float taxa, periodos;
    float resultado;
    printf("Digite o valor da taxa de juros nominal e o número de períodos por ano");
    scanf("%f %f", &taxa, &periodos);

    resultado =  pow((1 + taxa/ periodos), (periodos)) - 1;
    printf("A taxa de juros efetiva é: %.4f\n", resultado);

    return 0;
}
