#include <stdio.h>

int main(){
  int numero, resto;
  printf("digite um número \n");
  scanf("%d", &numero);
  resto = numero % 5;

  if (resto == 0){
    printf("É um multiplo de 5");
    }
  else{
    printf("NÃO é um multiplo de 5");
  }
  
  return 0;
}
