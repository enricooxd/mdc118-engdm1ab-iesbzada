// faca um programa em c que calcule a decomposiçao de um numero inteiro qualquer em unidade, dezena, centena e milhar.(ex: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares)
#include <stdio.h>
int main(){
int numero_qualquer;
int unidade;
int dezena;
int centena;
int milhar;

  printf("Entre com um valor qualquer: ");
  int deu_certo = scanf("%i", &numero_qualquer);

  milhar = numero_qualquer / 1000 % 10;
  centena = numero_qualquer / 100 % 10;
  dezena = numero_qualquer / 10 % 10;
  unidade = numero_qualquer / 1 % 10;

  printf("O numero %i tem:\n  milhares: %i\n centenas: %i\n dezenas: %i\n unidades: %i\n", numero_qualquer, milhar, centena, dezena, unidade);
 
  return 0;
}