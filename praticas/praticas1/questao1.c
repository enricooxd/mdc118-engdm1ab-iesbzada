/* faca um programa em c que calcule a media final a partidar da formula (0,4xA1) + (0,6xA2). Considere A1 e A2 numeros reais entre 0 e 10
*/

#include <stdio.h>
int main() {
  float A1 = 0.0f;
  float A2 = 0.0f;

  printf("Entre com um valor para a nota A1: ");
  int deu_certo = scanf("%f", &A1);

  printf("Entre com um valor para a nota A2: ");
  int deu_certo2 = scanf("%f", &A2);

  float media_final = (0.4 * A1) + (0.6 * A2);
  printf("A media final é: %f\n", media_final);


  return 0;
}