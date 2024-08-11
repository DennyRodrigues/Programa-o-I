#include <stdio.h>

int main(){
  int numero, result;
  printf("digite um número \n");
  scanf("%d", &numero);
  result = numero % 2;

  if (result == 1){
    printf("É Impar \n");
    }
  else if(result == 0){
    printf("É Par \n");
  }
  
  return 0;
}
