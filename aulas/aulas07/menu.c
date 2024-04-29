#include <stdio.h>
int main(){
  int opcao;

  printf("MENU PRINCIPAL \n");
  printf("1 - Consultar saldo \n");
  printf("2 - Recarregar saldo \n");
  printf("3 - Ligaçôes Recebidas \n");
  printf("4 - Ligações Feitas \n");
  printf("0 - Sair \n");
  
  printf("Entre com uma opção: ");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao) {
    case 1: 
      printf("Seu saldo é de R$ 10.00 \n");
      break;
    case 2: {
      float valor;
      printf(" Entre com o valor da Recarga: \n");
      deu_certo = scanf("%f", &valor);
      printf("VocÊ acabou de recarregar R$ %.2f \n",             valor);
      break;
      }
    case 3:
      printf("As 3 ultimas ligações recebidas \n");
      printf("9999-9999\n");
      printf("1234-5678\n");
      printf("8888-9999\n");
      break;
    case 4:
      printf("As 2 ligações feitas \n");
      printf("4242-4242\n");
      printf("7777-6666\n");
      break;
    case 0:
      printf("Saindo... \n");
      printf("Até logo! \n");
      break;
    default:
      printf("Opção inválida! \n");
      break;
  }
  
  return 0;
}