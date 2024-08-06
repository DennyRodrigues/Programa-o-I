#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float v;
    float result;
    printf("Digite o valor da Massa \n");
    scanf("%f", &a);
    printf("Digite o valor da Velocidade \n");
    scanf("%f", &v);
    result = (a * pow(v, 2))/2;

    printf("A energia cinética é: %.2f\n", result);

    return 0;
}
