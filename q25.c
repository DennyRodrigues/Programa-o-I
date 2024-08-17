#include <stdio.h>

int main()
{
  float rendaAnual, impostoDevido = 0.0;
  int faixaImposto;

  printf("Digite seu rendimento anual: ");
  scanf("%f", &rendaAnual);

  if (rendaAnual <= 22000.00)
  {
    faixaImposto = 1;
  }
  else if (rendaAnual <= 45000.00)
  {
    faixaImposto = 2;
  }
  else
  {
    faixaImposto = 3;
  }

  switch (faixaImposto)
  {
  case 1:
    impostoDevido = rendaAnual * 0.05;
    break;
  case 2:
    impostoDevido = 1100.00 + ((rendaAnual - 22000.00) * 0.15);
    break;
  case 3:
    impostoDevido = 4550.00 + ((rendaAnual - 45000.00) * 0.25);
    break;
  default:
    printf("Faixa de imposto inválida.\n");
    return 1;
  }

  printf("O montante do imposto a ser pago é: R$%.2f\n", impostoDevido);

  return 0;
}
