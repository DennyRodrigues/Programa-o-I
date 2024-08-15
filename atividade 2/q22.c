#include <stdio.h>

int main() {
    int categoria, unidades, preco;
    float desconto, valorBruto, result;
    printf("Calculadora de Desconto:\n");
    printf("Digite a categoria e a quantidade de unidades compradas:\n");
    scanf("%d %d", &categoria, &unidades);

    switch (categoria) {
    case 1:
        printf("produto de tecnologia\n");
        preco = 150;
        break;
    case 2:
        printf("produto de alimentação\n");
        preco = 50;
        break;
    case 3:
        printf("produto de vestuário\n");
        preco = 80;
        break;
    case 4:
        printf("produto de saúde\n");
        preco = 120;
        break;
    case 5:
        printf("produto de Lazer\n");
        preco = 90;
        break;
    default:
        printf("Categoria inválida!\n");
        break;
    }

    if (unidades <= 5 && unidades >= 1){
        desconto = 0.05;
    }
    else if(unidades <= 10) {
        desconto = 0.10;
    }
    else if(unidades > 10) {
        desconto = 0.15;
    }

    valorBruto = unidades * preco;
    result = valorBruto * (1 - desconto);
    printf("O resultado é %.2f reais", result);
    return 0;
}

