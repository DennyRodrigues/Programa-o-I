#include <stdio.h>

int main()
{
  int altura, deverSerPreenchido;
  printf("Digite o valor para a altura do triângulo: ");
  scanf("%d", &altura);
  printf("Digite se o triângulo dever ser preenchido ou vazado(1 para preenchido e 2 para vazado)");
  scanf("%d", &deverSerPreenchido);

  if (altura < 1 || altura < 1 || (deverSerPreenchido < 0 || deverSerPreenchido > 2))
  {
    printf("Um dos valores digitados foi invalido.");
    return 1;
  }

  for (int i = 1; i <= altura; i++)
  {

    for (int j = altura - i + 1; j <= altura; j++)
    {
      if (i == 1 || j == altura - i + 1 || j == altura || i == altura || deverSerPreenchido == 1)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
