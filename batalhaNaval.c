#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Define as coordenadas iniciais dos navios
    int linhaNavioHorizontal = 2, colunaNavioHorizontal = 4;
    int linhaNavioVertical = 6, colunaNavioVertical = 7;

    // Posiciona o navio horizontalmente no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3;
    }

    // Posiciona o navio verticalmente no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;
    }

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
