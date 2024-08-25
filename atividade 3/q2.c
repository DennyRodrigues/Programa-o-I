#include <stdio.h>

int main()
{
  int N;
  printf("Digite o valor para a altura N: ");
  scanf("%d", &N);

  if (N < 2)
  {
    printf("O número digitado é inválido, N precisa ser maior que 1");
    return 0;
  }

  for (int i = 1; i <= N; i++)
  {
    for (int j = i; j <= N; j++)
    {
      printf("  ");
    }

    for (int j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    for (int j = i - 1; j >= 1; j--)
    {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}
