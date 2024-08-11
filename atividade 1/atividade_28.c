#include <stdio.h>
#include <math.h>


int main() {
    float a;
    float result;
    printf("Digite o valor do raio \n");
    scanf("%f", &a);
    result = pow(a, 3) * 3.14 * (4.0 / 3.0);

    printf("O volume da esfera é: %.2f\n", result);

    return 0;
}
