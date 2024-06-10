#include <stdio.h>

//Programa feito por Felipe Oliveira Alves (Matricula: 2412082012) e Henri de Macedo Bezerra (Matricula: 2412082022)

int main() {
    char tabuleiro[3][3];
    int linha, coluna;
    char jogador = 'X';
    char vencedor = ' ';
    int jogadas = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    void imprimirTabuleiro() {
        printf("\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf(" %c ", tabuleiro[i][j]);
                if (j < 2) printf("|");
            }
            printf("\n");
            if (i < 2) printf("---|---|---\n");
        }
        printf("\n");
    }

    char verificarVencedor() {
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
                return tabuleiro[i][0];
        }
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
                return tabuleiro[0][i];
        }
        if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
            return tabuleiro[0][0];
        if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
            return tabuleiro[0][2];

        return ' ';
    }

    while (vencedor == ' ' && jogadas < 9) {
        imprimirTabuleiro();
        printf("Jogador %c, digite a linha e a coluna (0, 1 ou 2): ", jogador);
        int result = scanf("%d %d", &linha, &coluna);

        if (result == 2 && linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = jogador;
            jogadas++;
            vencedor = verificarVencedor();
            jogador = (jogador == 'X') ? 'O' : 'X';
        } else {
            printf("Movimento invalido. Tente novamente.\n");
            while (getchar() != '\n'); // Limpar o buffer de entrada
        }
    }

    imprimirTabuleiro();

    if (vencedor != ' ') {
        printf("Jogador %c venceu!\n", vencedor);
    } else {
        printf("Empate!\n");
    }

    return 0;
}