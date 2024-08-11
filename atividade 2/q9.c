#include <stdio.h>

int main(){
  int numero;
  printf("digite o valor da nota \n");
  scanf("%d", &numero);

  if (numero <= 100 && numero >= 80){
      printf("excelente");
    }
  else if (numero < 80 && numero >= 60){
    printf("bom");
  }
    else if (numero < 40 && numero >= 59){
    printf("suficiente");
  }
  else{
    printf("insuficiente");
  }
  
  return 0;
}
