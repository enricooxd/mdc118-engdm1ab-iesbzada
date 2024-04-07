// Faça um programa em C que leia três números reais e imprima a média aritmética desses números.

#include <stdio.h>
int main(){
  int numero1;
  int numero2;
  int numero3;

  printf("Entre com o valor do numero 1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor do numero 2: ");
  deu_certo = scanf("%i", &numero2);

  printf("Entre com o valor do numero 3: ");
  deu_certo = scanf("%i", &numero3);

  int media = (numero1 + numero2 + numero3) / 3;

  printf("A media aritmetica dos numeros e: %i\n", media);

return 0;
}
  