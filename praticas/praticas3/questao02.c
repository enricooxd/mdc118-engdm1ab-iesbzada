// faca um programa em c que calcule o valor do desconto sobre um valor bruto
// lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica
// 5%; acima de 500.00 aplica 10%

#include <stdio.h>
int main() {
  float valor_bruto;

  printf("Entre com o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if (deu_certo) {
    if (valor_bruto <= 100.00) {
      float valor_desconto = valor_bruto * 0.01;
      printf("O valor do desconto é: %.1f\n", valor_desconto);
    } else if (valor_bruto <= 500.00) {
      float valor_desconto = valor_bruto * 0.05;
      printf("O valor do desconto é: %.1f\n", valor_desconto);
    } else if (valor_bruto > 500.00) {
      float valor_desconto = valor_bruto * 0.1;
      printf("O valor do desconto é: %.1f\n", valor_desconto);
    }
  }

  return 0;
}