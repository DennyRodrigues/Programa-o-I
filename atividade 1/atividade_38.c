#include <stdio.h>
#include <math.h>

int main() {
    float preco, desconto;
    float resultado;
    printf("Digite o preço de um produto e a percentagem de desconto");
    scanf("%f %f", &preco, &desconto);

    resultado = preco * (1 - desconto/100);
    printf("O preço final após o desconto é: %.2f\n", resultado);

    return 0;
}
