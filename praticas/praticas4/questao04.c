#include <stdio.h>
#include <string.h>

int main() {
  char frase [31];
  memset(frase, '\0', 31); // evita lixo na memoria


  printf("entre com uma frase de ate 30 caracteres: ");
  int deu_certo = scanf("%[^\n]s", frase);

  int k = 0;
  char matriz[6][5];
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 5; j++) {
      matriz[i][j] = frase[k++];
    }
  }

  printf("a frase codificada eh: ");

  for (int j = 0; j < 5; j++) {
    for (int i = 0; i < 6; i++) {
      printf("%c ", matriz[i][j]);
    }
  }
printf("\n");

  return 0;
}