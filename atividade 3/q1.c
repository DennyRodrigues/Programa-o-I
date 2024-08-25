#include <stdio.h>

int main()
{
  int height;
  printf("Digite a altura do Triângulo de Pascal: ");
  scanf("%d", &height);

  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < height - i; j++)
    {
      printf("  ");
    }

    int valor = 1;
    for (int k = 0; k <= i; k++)
    {
      printf(" %d  ", valor);
      valor = valor * (i - k) / (k + 1);
    }
    printf("\n");
  }

  return 0;
}
