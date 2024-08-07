#include <stdio.h>

int main() {
    float inicial, residual, anos;
    float resultado;
    printf("Digite o valor inicial de um bem, seu valor residual e a vida útil em anos  ");
    scanf("%f %f %f", &inicial, &residual, &anos);

    resultado = (inicial- residual) / anos;
    printf("A depreciação anual é: %.2f\n", resultado);

    return 0;
}
