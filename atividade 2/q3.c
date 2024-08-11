#include <stdio.h>

int main(){
  float numero;
  printf("digite a temperatura \n");
  scanf("%f", &numero);

  if (numero > 30){
    printf("Quente!");
    }
  else{
    printf("Frio!");
  }
  
  return 0;
}
