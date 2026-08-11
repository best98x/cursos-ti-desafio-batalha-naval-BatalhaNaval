#include <stdio.h>

int main() {
    // 1. Tabuleiro 10x10 inicializado com 0 (água)
    int tabuleiro[10][10] = {0};

    // 2. Vetores dos navios com tamanho 3 contendo o valor 3
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Posiciona Navio Horizontal (Linha 2, Colunas 1, 2, 3)
    tabuleiro[2][1] = navio_horizontal[0];
    tabuleiro[2][2] = navio_horizontal[1];
    tabuleiro[2][3] = navio_horizontal[2];

    // Posiciona Navio Vertical (Coluna 6, Linhas 5, 6, 7)
    tabuleiro[5][6] = navio_vertical[0];
    tabuleiro[6][6] = navio_vertical[1];
    tabuleiro[7][6] = navio_vertical[2];

    // 3. Exibição simples do tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao final de cada linha da matriz
    }

    return 0;
}
