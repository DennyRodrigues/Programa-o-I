#include <stdio.h>

int main()
{
  int B, L, A;

  printf("Digite o valor de B (ímpar e maior que 3): ");
  scanf("%d", &B);
  if (B < 3 || B % 2 == 0)
  {
    printf("Valor inválido para B. Tente novamente.\n");
    return 1;
  }

  printf("Digite o valor de L (ímpar e menor que a metade de B): ");
  scanf("%d", &L);
  if (L < 1 || L % 2 == 0 || L > B / 2)
  {
    printf("Valor inválido para L. Tente novamente.\n");
    return 1;
  }

  printf("Digite o valor de A (>= 2 e menor que a metade de B): ");
  scanf("%d", &A);
  if (A < 2 || A > B / 2)
  {
    printf("Valor inválido para A. Tente novamente.\n");
    return 1;
  }

  for (int i = 1; i <= B; i += 2)
  {
    for (int j = 0; j < (B - i) / 2; j++)
    {
      printf(" ");
    }
    for (int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  for (int i = 0; i < A; i++)
  {
    for (int j = 0; j < (B - L) / 2; j++)
    {
      printf(" ");
    }
    for (int j = 0; j < L; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
