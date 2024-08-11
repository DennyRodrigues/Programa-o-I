#include <stdio.h>

int main() {
    int r;
    float area;

    printf("Área de um círculo \n");
    printf("Digite o raio \n");
    scanf("%d", &r);
    area = (r * r * 3.14);

    printf("Área = %.2f\n", area);

    return 0;
}
