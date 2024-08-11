#include <stdio.h>

int main(){
  int numero;
  printf("digite um número");
  scanf("%d", &numero);

  if (numero > 0){
      printf("É positivo");
  }
  else if(numero < 0){
    printf("É negativo");
  }
  else {
    printf("É zero");
  }
  return 0;
}
