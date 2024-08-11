#include <stdio.h>

#include <stdio.h>

int main(){
  int numero;
  printf("digite um número de 1 a 7 \n");
  scanf("%d", &numero);
  switch (numero)
  {
  case 1:
      printf("É domingo");
    break;
  case 2:
      printf("É Segunda-feira");
    break;
  case 3:
      printf("É Terça-feira");
    break;
  case 4:
      printf("É Quarta-feira");
    break;
  case 5:
      printf("É Quinta-feira");
    break;
  case 6:
      printf("É Sexta-feira");
    break;
  case 7:
      printf("É Sábado");
    break;
  default:
    printf("Número não é de 1 a 7");
    break;
  }
  return 0;

}
