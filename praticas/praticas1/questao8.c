// Faca um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a quantas horas, minutos e segundos?)

#include <stdio.h>
int main (){
  int segundos;
  int minutos;
  int horas;

  printf("Entre com o valor em segundos: ");
  int deu_certo = scanf("%i", &segundos);

  minutos = segundos / 60;
  horas = minutos / 60;
  int segundos_restantes = segundos % 60;
  int minutos_restantes = minutos % 60;

  
  printf("O valor em horas, minutos e segundos e: %i:%i:%i\n", horas, minutos_restantes, segundos_restantes);
  
  return 0;
}