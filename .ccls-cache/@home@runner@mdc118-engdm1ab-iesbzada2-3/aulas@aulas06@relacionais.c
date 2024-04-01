#include <stdio.h>
int main(){
  int numero1;
  int numero2;

  printf("Entre cm o valor do numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre cm o valor do numero2: ");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2
  printf("Os numeros sao iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("Os numeros sao diferntes? %i\n", sao_diferentes);

  int e_maior = numero1 > numero2;
  printf("O primeiro numero e maior? %i\n", e_maior);

  int e_menor = numero1 < numero2;
  printf("O primeiro numero e menor? %i\n", e_menor);

  int e_maior_igual = numero1 >= numero2;
  printf("O primeiro numero e maior ou igual? %i\n", e_maior_igual);

  int e_menor_igual = numero1 <= numero2;
  printf("O primeiro numero e menor ou igual? %i\n", e_menor_igual);
  

  return 0;
}
