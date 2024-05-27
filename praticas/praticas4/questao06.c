#include <stdio.h>
#include <string.h>
int main(){
  char verbo[21];

  printf("Entre com um verbo terminado em AR: ");
  int deu_certo = scanf("%s", verbo);

  int tamanho = strlen(verbo);
  int ultima_posicao = tamanho - 1;
  int penultima_posicao = ultima_posicao - 1;

  if(verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R') {
    
  } else {
    printf("O verbo %s nao termina em AR!\n", verbo);
  }
  
  return 0;
}