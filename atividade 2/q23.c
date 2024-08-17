#include <stdio.h>

int main()
{
    int horario, trafego;
    int tempoVerde, tempoAmarelo, tempoVermelho;

    printf("Digite o horário do dia (1 = manhã, 2 = tarde, 3 = noite): ");
    scanf("%d", &horario);
    printf("Digite o nível de tráfego (1 = baixo, 2 = médio, 3 = alto): ");
    scanf("%d", &trafego);

    switch (horario)
    {
    case 1:
        tempoVerde = 30;
        tempoAmarelo = 5;
        tempoVermelho = 25;
        break;
    case 2:
        tempoVerde = 40;
        tempoAmarelo = 7;
        tempoVermelho = 35;
        break;
    case 3:
        tempoVerde = 25;
        tempoAmarelo = 5;
        tempoVermelho = 20;
        break;
    default:
        printf("Horário inválido.\n");
        return 1;
    }

    if (trafego == 1)
    {
        tempoVermelho += 10;
    }
    else if (trafego == 2)
    {
        tempoAmarelo = 6;
    }
    else if (trafego == 3)
    {
        tempoVerde += 10;
    }
    else
    {
        printf("Nível de tráfego inválido.\n");
        return 1;
    }

    printf("Tempos ajustados do semáforo:\n");
    printf("Verde: %d segundos\n", tempoVerde);
    printf("Amarelo: %d segundos\n", tempoAmarelo);
    printf("Vermelho: %d segundos\n", tempoVermelho);

    return 0;
}
