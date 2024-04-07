//faca um programa em c que calcule a altura alcançada por um avião após ter percorrido uma certa distancia(seno(angulo)= altura/distancia). Considere o angulo de inclinaçao do avião menor ou igual a 45°

#include <stdio.h>
#include <math.h>

int main() {
int angulo;
int altura;
int distancia;

  printf("entre com o valor do angulo: ");
    int deu_certo = scanf("%i", &angulo);

  printf("entre com o valor da distancia em metros: ");
  deu_certo = scanf("%i", &distancia);

  altura = distancia * sin(angulo);

  printf("o valor da altura em metros e: %i\n", altura);

  return 0;
}