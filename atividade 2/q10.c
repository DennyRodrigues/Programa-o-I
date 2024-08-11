#include <stdio.h>

int main(){
  int numero;
  printf("digite o valor da velocidade \n");
  scanf("%d", &numero);

  if (numero > 60){
      printf("alta");
    }
  else if (numero <= 60 && numero >= 30){
    printf("média");
  }
    else if (numero < 30){
    printf("baixa");
  }
  
  return 0;
}
