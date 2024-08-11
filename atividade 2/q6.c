#include <stdio.h>

int main(){
  int numero;
  printf("digite um número \n");
  scanf("%d", &numero);

  if (numero > 0 && numero < 100){
    printf("Número está entre 1 e 100");
    }
  else{
    printf("NÃO está entre 1 e 100");
  }
  
  return 0;
}
