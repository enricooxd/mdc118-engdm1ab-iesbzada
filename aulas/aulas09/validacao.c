#include <stdio.h>

int main() {
  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) {
  printf("Entre com um número entre 1 e 10: ");
  int deu_certo = scanf("%i", &numero);

   numero_valido = deu_certo && numero >=1 && numero <= 10;

    if (numero_valido == 0) {
      printf("Algo de errado não está certo!\n");
      getchar(); // limpar o buffer
    }
  } 

  printf("Faz certo que da certo!\n");

  do {
      printf("Entre com um número entre 1 e 10: ");
      int deu_certo = scanf("%i", &numero);

       numero_valido = deu_certo && numero >=1 && numero <= 10;

        if (numero_valido == 0) {
          printf("Algo de errado não está certo!\n");
          getchar(); // limpar o buffer
        }
  } while (numero_valido == 0);

  printf("Faz certo que da certo!\n");-

return 0;
}