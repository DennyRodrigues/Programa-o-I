#include <stdio.h>

int main()
{
  float valor, desconto, result;

  printf("Digite o valor inicial da compra: ");
  scanf("%f", &valor);

  if (valor <= 100)
  {
    desconto = 0.05; 
  }
  else if (valor > 100 && valor <= 500)
  {
    desconto = 0.10; 
  }
  else if (valor > 500)
  {
    desconto = 0.15; 
  }
  result = valor * (1 - desconto);

  printf("O valor final da compra é: R$ %.2f\n", result);

  return 0;
}
