#include <stdio.h>

int main()
{
  int horas;
  float custo;

  printf("Digite quantas horas que o carro ficou estacionado: ");
  scanf("%d", &horas);

  if (horas <= 2)
  {
    custo = horas * 5.00;
  }
  else if (horas > 2 && horas <= 5)
  {
    custo = (10.00) + ((horas - 2) * 3.00);
  }
  else
  {
    custo = (19.00) + ((horas - 5) * 2.00);
  }

  printf("O custo total do estacionamento é: R$%.2f\n", custo);

  return 0;
}
