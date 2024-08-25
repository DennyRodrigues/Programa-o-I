#include <stdio.h>

int main()
{
  int largura, altura;
  printf("Digite o valor para a largura do Losango: ");
  scanf("%d", &largura);
  altura = largura * 2;

  for (int i = 0; i < altura; i++)
  {

    if (i < largura)
    {
      for (int j = i; j <= largura - 1; j++)
      {
        printf(" ");
      }
      for (int j = largura - i; j < largura; j++)
      {
        printf("X ");
      }
    }
    else
    {
      for (int j = i; j > largura; j--)
      {
        printf(" ");
      }
      for (int j = i; j < altura; j++)
      {
        printf("X ");
      }
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
