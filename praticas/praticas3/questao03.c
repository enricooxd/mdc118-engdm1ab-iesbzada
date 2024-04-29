/* faca um programa em c que imprima um qualitativo associado a uma nota lida comforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = bom; 5 = otimo, e imrpima a nota invalida nos demais casos
*/

#include <stdio.h>
int main(){
  int nota;

  printf("Entre com a nota de 1 a 5: ");
  int deu_certo = scanf("%i", &nota);

  switch(nota) {
    case 1: printf("Ruim\n"); break;
    case 2: printf("Insuficiente\n"); break;
    case 3: printf("Suficiente\n"); break;
    case 4: printf("Bom\n"); break;
    case 5: printf("Otimo\n"); break;
    default: printf("Nota invalida\n"); break;  
  }

  return 0;
}