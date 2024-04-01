// faca um programa em c que converta uma idade expressa em anos, meses e dias para um valor em dias. considere um ano com 365 dias e um mes com 30 dias.
#include <stdio.h>
  int main(){
  
  int anos;
  int dias;
  int meses;

  printf("Entre com a idade em anos: ");
  int deu_certo = scanf("%i", &anos);

    printf("Entre com a idade em meses: ");
    deu_certo = scanf("%i", &meses);

    printf("Entre com a idade em dias: ");
    deu_certo = scanf("%i", &dias);
    
  
  anos = anos * 365;
  meses = meses * 30;
  dias = dias % 30;

  int idade_dias = anos + meses + dias;

 printf("A idade em dias é: %i\n", idade_dias);
   deu_certo = scanf("%i", &idade_dias);

  return 0;
  }