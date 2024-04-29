#include <stdio.h>
int main() {
  int idade;

  printf("Entre com o valor da idade: ");
  int deu_certo = scanf("%i", &idade);

  if(deu_certo){
    if(idade < 16){
    printf("Ainda nao tem idade para votar \n");
    } else if (idade >= 18 && idade <= 70){
    printf("O voto é obrigatorio \n");
    } else {
    printf("O voto é opcional \n");
    }
  } else {
    printf("O valor inserido é invalido!\n");
  }
  
  return 0;
}