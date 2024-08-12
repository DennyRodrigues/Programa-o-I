#include <stdio.h>

int main(){
    int ladoA, ladoB,ladoC ;
    printf("Digite os valores dos lados:\n");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
    
    if (ladoA + ladoB > ladoC && 
        ladoA + ladoC > ladoB && 
        ladoB + ladoC > ladoA) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("O triângulo é classificado como Equilátero.\n");
        } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
            printf("O triângulo é classificado como Isósceles.\n");
        } else {
            printf("O triângulo é classificado como Escaleno.\n");
        }
        }
    else{
      printf("Não é um triângulo");
    }

  return 0;
}
