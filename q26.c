#include <stdio.h>

int main()
{
  int tipoEvento, assentosDesejados, assentosDisponiveis;

  printf("Selecione o tipo de evento:\n");
  printf("1 - Concerto\n");
  printf("2 - Teatro\n");
  printf("3 - Evento Esportivo\n");
  printf("4 - Conferência\n");
  printf("Digite o número correspondente ao tipo de evento: ");
  scanf("%d", &tipoEvento);

  if (tipoEvento < 1 || tipoEvento > 4)
  {
    printf("Tipo de evento inválido.\n");
    return 1;
  }

  printf("Digite o número de assentos desejados: ");
  scanf("%d", &assentosDesejados);

  switch (tipoEvento)
  {
  case 1:
    if (assentosDesejados <= 500)
    {
      assentosDisponiveis = 500 - assentosDesejados;
      printf("Reserva confirmada para o Concerto! Você reservou %d assentos.\n", assentosDesejados);
    }
    else
    {
      printf("Não há assentos suficientes disponíveis para o Concerto.\n");
    }
    break;
  case 2:
    if (assentosDesejados <= 200)
    {
      assentosDisponiveis = 200 - assentosDesejados;
      printf("Reserva confirmada para o Teatro! Você reservou %d assentos.\n", assentosDesejados);
    }
    else
    {
      printf("Não há assentos suficientes disponíveis para o Teatro.\n");
    }
    break;
  case 3:
    if (assentosDesejados <= 1000)
    {
      assentosDisponiveis = 1000 - assentosDesejados;
      printf("Reserva confirmada para o Evento Esportivo! Você reservou %d assentos.\n", assentosDesejados);
    }
    else
    {
      printf("Não há assentos suficientes disponíveis para o Evento Esportivo.\n");
    }
    break;
  case 4:
    if (assentosDesejados <= 300)
    {
      assentosDisponiveis = 300 - assentosDesejados;
      printf("Reserva confirmada para a Conferência! Você reservou %d assentos.\n", assentosDesejados);
    }
    else
    {
      printf("Não há assentos suficientes disponíveis para a Conferência.\n");
    }
    break;
  }

  return 0;
}
