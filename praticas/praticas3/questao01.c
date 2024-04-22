// faca um programa em c que determine se um numero é impar ou par
#include <stdio.h>
int main(){
  int numero1;

  printf("Entre com o valor do numero: ");
  int deu_certo = scanf("%i", &numero1);

  if(deu_certo) {
  if (numero1 % 2 == 0) {
    printf("O numero %i é par!\n", numero1);
  } else {
    printf("O numero é impar!\n");
  }
  } else {
    printf("O numero é invalido!\n");
  }
  
  return 0;
}