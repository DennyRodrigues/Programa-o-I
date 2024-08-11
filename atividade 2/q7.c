#include <stdio.h>

int main(){
  int numero;
  printf("digite o valor do nível de água no tanque \n");
  scanf("%d", &numero);

  if (numero < 100){
    if (numero < 50){
      printf("Nível está baixo");
    }
    else {
      printf("Nível está médio");
    }
 
    }
  else{
    printf("Nível está alto");
  }
  
  return 0;
}
