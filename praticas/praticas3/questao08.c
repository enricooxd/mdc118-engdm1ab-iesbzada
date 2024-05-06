/* Faça um programa em C que calcule o fatorial de um número inteiro
*/
#include <stdio.h>
int main(){
  long int numero;
  long int fatorial = 1;

  printf("Entre com um numero inteiro maior ou igual a zero: ");
  int deu_certo = scanf("%li", &numero);

  if (deu_certo && numero >= 0) {
    printf("%li! = ", numero);
    for (int i = numero; i > 1; i--) {
      printf("%i * ", i);
      fatorial = fatorial * i;
    }
    printf("1 = %li\n", fatorial);
    //printf("O fatorial de %i é %li\n", numero, fatorial);
  } else{
    printf("Numero invalido. Tente novamente\n");
  }

  return 0;
}