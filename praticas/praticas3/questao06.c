/*  Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.
*/
#include <stdio.h>
int main(){
int numero;

  printf("Entre com um numero de 1 a 100: ");
  int deu_certo = scanf("%i", &numero);

  if(deu_certo && numero > 0 && numero < 101){
    printf("Os numeros multiplos de %i entre 1 e 100\n", numero);
    // for (int i = 1; 1 < 101, i++ ) {
    //   if (i % numero == 0) {
    //     printf("%i\n", i);
    //   }
    // }
    for (int i = numero; i < 101; i = i + numero){
      printf("%i, ", i);
    }
    printf("\n");
  } else {
    printf("Numero Invalido. Tente novamente\n");
  }

  return 0;
}