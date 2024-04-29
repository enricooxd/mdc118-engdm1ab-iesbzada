#include <stdio.h>
int main(){
  int avaliacao;

  printf("Entre com a avaliacao do motorista entre 1 a 5: ");
  int deu_certo = scanf("%i", &avaliacao);

/*
  if(deu_certo){
    if(avaliacao == 1){
    printf("O motorista ganhou *\n");
    } else if(avaliacao == 2){
    printf("O motorista ganhou **\n");
    } else if(avaliacao == 3){
    printf("O motorista ganhou ***\n");
    } else if(avaliacao == 4){
    printf("O motorista ganhou ****\n");
    } else if(avaliacao == 5){
    printf("O motorista ganhou *****\n");
    }
  } else{
    printf("Avaliacao invalida. Tente Novamente!\n");
  }
*/
  
//o codigo acima pode ser escrito de forma mais simples utilizando a ferramenta switch(quando possuir opçoes de igualdade(==))

  switch(avaliacao){
    case 1: printf("O motorista ganhou *\n"); break;
    case 2: printf("O motorista ganhou **\n"); break;
    case 3: printf("O motorista ganhou ***\n"); break;
    case 4: printf("O motorista ganhou ****\n"); break;
    case 5: printf("O motorista ganhou *****\n"); break;
  }
  return 0;
}