#include <stdio.h>
int main(){
  int numero1;
  int numero2;

  printf("Entre com o valor do numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor do numero2: ");
  deu_certo = scanf("%i", &numero2);

  // 0 < numero1 < 10
  int maior_que_zero_menor_que_dez = numero1 > 0 && numero1 < 10;
  printf("O numero1 esta entre 0 e 10? %i\n", maior_que_zero_menor_que_dez);
  
  // 0 < numero1, numero1 > 10
  int menor_que_zero_maior_que_dez = numero1 < 0 || numero1 > 10;
  printf("O numero1 e maior que zero ou maior que dez? %i\n", menor_que_zero_maior_que_dez);

  //negaçao
  int nao_e_maior_que_zero = !(numero1 > 0);
  printf("O 1º numero nao e maior que zero? %i\n", nao_e_maior_que_zero);

  
  
  return 0;
}
