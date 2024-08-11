#include <stdio.h>

int main(){
  float numero;
  printf("digite a idade \n");
  scanf("%f", &numero);

  if (numero >= 18){
    printf("Pode votar sim!");
    }
  else{
    printf("Não pode votar!");
  }
  
  return 0;
}
