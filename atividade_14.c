#include <stdio.h>

int main() {
    int inicial;
    int juros;
    int tempo;
    float result;

    printf("montante de juros simples acumulado \n");
    printf("Digite valor do investimento inicial\n");
    scanf("%d", &inicial);
    printf("Digite valor dos juros anual\n");
    scanf("%d", &juros);
    printf("Digite valor do tempo de investimento em anos\n");
    scanf("%d", &tempo);
    // sqrt(cateto1^2 + cateto2^2).
    result = inicial * (juros / 100.00) * tempo;
    
    printf("O montante final é: %.2f\n", result);

    return 0;
}
