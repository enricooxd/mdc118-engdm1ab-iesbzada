/* Faca um programa em C que calcule a raiz de uma equaçao do 2 grau atraves da formula de bhaskara(-b +/- raiz_quadrada(b² - 4ac)/2a).)
*/
#include <stdio.h>
#include <math.h>
int main(){
  int a;
  int b;
  int c;

  printf("Entre com o valor de A: ");
  int deu_certo = scanf("%i", &a);

  printf("Entre com o valor de B: ");
  deu_certo = scanf("%i", &b);

  printf("Entre com o valor de C: ");
  deu_certo = scanf("%i", &c);
  
  int delta = b*b - 4*a*c;
  printf("O valor de delta é: %i\n", delta);
  
  double raiz1 = (-b + sqrt(delta)) / (2*a);
  
  double raiz2 = (-b - sqrt(delta)) / (2*a);

  if (delta < 0)
  printf("nao existe raiz real\n");
  else if (delta >= 0)
  printf("as raizes da equacao sao x1: %.2f e x2: %.2f\n", raiz1, raiz2);
  
  return 0;
}
