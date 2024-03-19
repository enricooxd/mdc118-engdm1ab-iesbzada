/*
Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/
#include  <stdio.h>
int main(){
  int base;
  int altura;

  printf("Digite a base do triângulo: ");
  int deu_certo = scanf("%i", &base);

  printf("Digite a altura do triângulo: ");
  int deu_certo2 = scanf("%i", &altura);

  int area = (base * altura) / 2;
  printf("A área do triângulo é: %i\n", area);
  
  return   0;
}
