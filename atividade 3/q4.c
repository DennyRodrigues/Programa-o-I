#include <stdio.h>

int main()
{
  int largura, altura, deverSerPreenchido;
  printf("Digite o valor para a altura do quadrado: ");
  scanf("%d", &altura);
  printf("Digite o valor para a largura do quadrado: ");
  scanf("%d", &largura);
  printf("Digite se o quadrado dever ser preenchido ou vazado(1 para preenchido e 2 para vazado)");
  scanf("%d", &deverSerPreenchido);

  if (altura < 1 || largura < 1 || (deverSerPreenchido < 0 || deverSerPreenchido > 2))
  {
    printf("Um dos valores digitados foi invalido.");
    return 1;
  }

  for (int i = 1; i <= altura; i++)
  {

    for (int j = 1; j <= largura; j++)
    {
      if (i == 1 || j == 1 || j == largura || i == altura || deverSerPreenchido == 1)
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
