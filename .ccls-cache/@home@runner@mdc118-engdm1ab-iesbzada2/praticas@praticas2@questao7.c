/*Faça um programa em C que leia o valorda hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/

#include <stdio.h>
  int main(){
  float valor_hora_trabalhada = 150.0f;
  int total_horas_trabalhadas = 200;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_hora_trabalhada * total_horas_trabalhadas;
  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;
  float salario_liquido = salario_bruto - valor_ir - valor_inss;

  printf("\x1b[32m--------------------------\n");
  printf(" C O N T R A  C H E Q U E \n");
  printf("--------------------------\x1b[0m\n");
  printf("Salario bruto...: R$ \x1b[34m%8.2f\x1b[0m\n", salario_bruto);
  printf("Valor IR........: R$ \x1b[31m%8.2f\x1b[0m\n", valor_ir);
  printf("Valor INSS......: R$ \x1b[31m%8.2f\x1b[0m\n", valor_inss);
  printf("Salario liquido.: R$ \x1b[35m%8.2f\x1b[0m\n", salario_liquido);

  return 0;
  }