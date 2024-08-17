#include <math.h>
#include <stdlib.h>

int main()
{
  int valor, resultado, distancia10, distancia100, distancia1000;

  printf("Digite um o valor da distância: ");
  scanf("%d", &valor);

  distancia10 = abs(valor - 10);
  distancia100 = abs(valor - 100);
  distancia1000 = abs(valor - 1000);

  if (distancia10 < distancia100 && distancia10 < distancia1000)
  {
    resultado = 10;
  }
  else if (distancia100 < distancia10 && distancia100 < distancia1000)
  {
    resultado = 100;
  }
  else if (distancia1000 < distancia10 && distancia1000 < distancia100)
  {
    resultado = 1000;
  }

  if (distancia10 == distancia100 && distancia10 <= distancia1000)
  {
    resultado = 100;
  }
  else if (distancia10 == distancia1000 && distancia10 <= distancia100)
  {
    resultado = 1000;
  }
  else if (distancia100 == distancia1000 && distancia100 <= distancia10)
  {
    resultado = 1000;
  }

  printf("A distância mais perto é: %d\n", resultado);

  return 0;
}
