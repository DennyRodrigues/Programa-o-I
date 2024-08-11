#include <stdio.h>
#include <math.h>


int main() {
    float a;
    float height;
    float result;
    printf("Digite o valor do raio \n");
    scanf("%f", &a);
    printf("Digite o valor da altura \n");
    scanf("%f", &height);
    result = pow(a, 2) * 3.14 * height;

    printf("O volume do cilindro é: %.2f\n", result);

    return 0;
}
