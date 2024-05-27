#include <stdio.h> 
#include <string.h>

int main() { // como c n possui o tipo string, eh usada uma matriz de caracteres
  char nome[20]; // na ultima posicao precisa ter \0 (obrigatoriamente)
  memset(nome, '\0', 20); // evita lixo na memoria

  printf("entre com seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Olá %s!", nome);  


  //biblioteca string.h
 char mensagem[30];
  strcpy(mensagem, "Ola");
  printf("%s\n", mensagem);
  strcat(mensagem, "mundo"); //adicionar coisas na string
  printf("%s\n", mensagem);


  //tamanho da string
  int tamanho = strlen(mensagem);
  printf("O tamanho da string eh %i\n", tamanho);

  //comparacao de strings
  printf("as strings nome e mensagem sao iguais? %i\n", strcmp(nome, mensagem));



  return 0;
}