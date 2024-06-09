#include <stdio.h>

int computador_escolhe_jogada(int n, int m) {
    int valor;
    if (n % (m + 1) == 0) {
        valor = m;
    } else {
        valor = n % (m + 1);
    }
    if (valor == 1) {
        printf("O computador tirou uma peça.\n");
    } else {
        printf("O computador tirou %d peças.\n", valor);
    }
    int resultado = n - valor;
    if (resultado == 1) {
        printf("Agora resta apenas uma peça no tabuleiro.\n");
    } else {
        printf("Agora restam %d peças no tabuleiro.\n", resultado);
    }
    return valor;
}

int usuario_escolhe_jogada(int n, int m) {
    int valor;
    printf("Quantas peças você vai tirar? ");
    scanf("%d", &valor);
    while (valor < 1 || valor > m) {
        printf("Oops! Jogada inválida! Tente de novo.\n");
        printf("Quantas peças você vai tirar? ");
        scanf("%d", &valor);
    }
    if (valor == 1) {
        printf("Você tirou uma peça.\n");
    } else {
        printf("Você tirou %d peças.\n", valor);
    }
    int resultado = n - valor;
    if (resultado == 1) {
        printf("Agora resta apenas uma peça no tabuleiro.\n");
    } else {
        printf("Agora restam %d peças no tabuleiro.\n", resultado);
    }
    return valor;
}

int partida() {
    int n, m;
    int computador_turno = 0;
    printf("Quantas peças? ");
    scanf("%d", &n);
    printf("Limite de peças por jogada? ");
    scanf("%d", &m);
    if (n % (m + 1) == 0) {
        printf("Você começa!\n");
    } else {
        printf("Computador começa!\n");
        computador_turno = 1;
    }
    while (n != 0) {
        if (computador_turno) {
            n = n - computador_escolhe_jogada(n, m);
        } else {
            n = n - usuario_escolhe_jogada(n, m);
        }
        computador_turno = !computador_turno;
    }
    if (computador_turno) {
        printf("Fim do jogo! Você ganhou!\n");
        return 1;
    } else {
        printf("Fim do jogo! O computador ganhou!\n");
        return 0;
    }
}

void campeonato() {
    int pontos_jogador = 0;
    int pontos_computador = 0;
    int rodadas = 1;
    while (rodadas < 4) {
        printf("**** Rodada %d ****\n", rodadas);
        if (partida() == 1) {
            pontos_jogador += 1;
        } else {
            pontos_computador += 1;
        }
        rodadas += 1;
    }
    printf("**** Final do campeonato! ****\n");
    printf("Placar: Você %d X %d Computador\n", pontos_jogador, pontos_computador);
}

int main() {
    int escolha;
    printf("1 - para jogar uma partida isolada\n");
    printf("2 - para jogar um campeonato\n");
    printf("Bem-vindo ao jogo do NIM! Escolha:");
    scanf("%d", &escolha);
    if (escolha == 1) {
        partida();
    } else if (escolha == 2) {
        campeonato();
    }
    return 0;
}