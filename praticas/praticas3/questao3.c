/* Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>
int main(){
  float raio;
  const float PI = 3.1416;

  printf("Entre com o valor do raio para a pizza: ");
  int deu_certo = scanf("%f", &raio);

  int perimetro = 2 * PI * raio;

  printf("O perimetro da pizza é: %i\n", perimetro);
  
  return 0;
}