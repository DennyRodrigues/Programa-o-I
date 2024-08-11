#include <stdio.h>
#include <math.h>


int main() {
    float notaA, notaB, notaC;
    int pesoA, pesoB, pesoC;
    float media;
    printf("Digite a primeira nota e seu peso: ");
    scanf("%f %d", &notaA, &pesoA);

    printf("Digite a segunda nota e seu peso: ");
    scanf("%f %d", &notaB, &pesoB);

    printf("Digite a terceira nota e seu peso: ");
    scanf("%f %d", &notaC, &pesoC);
    media = (notaA * pesoA + notaB * pesoB + notaC * pesoC) / (pesoA + pesoB + pesoC);
    printf("A média ponderada é: %.2f\n", media);

    return 0;
}
