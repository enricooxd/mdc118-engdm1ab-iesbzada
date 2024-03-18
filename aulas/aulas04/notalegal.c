#include <stdio.h>
int main() {


  printf("--------------------------------\n");
  printf("       N O T A  L E G A L       \n");
  printf("--------------------------------\n");
  printf("  ITEM     QUANTIDADE    PRECO  \n");

  char item[31] = "banana prata";
  int quantidade = 12;
  float preco = 15.00f;

  printf("%11s %14i %5.2f\n", item, quantidade, preco);

  char item2[31] = "goiaba";
  int quantidade2 = 6;
  float preco2 = 10.00f;

  char item3[31] = "pitu";
  int quantidade3 = 2;
  float preco3 = 50.00f;

  printf("banana prata   12         15.00 \n");
  printf("goiaba          6         10.00 \n");
  printf("pitu            2         50.00 \n");


  return 0;
}