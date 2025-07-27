#include <stdio.h>

// Constantes para o número de casas que cada peça pode se mover
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Movimentação do Bispo: diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Passo %d: Cima e Direita\n", i);
    }
    printf("\n");

    // Movimentação da Torre: horizontal para a direita
    printf("Movimentação da Torre (Direita):\n");
    int i = 1;
    while (i <= TORRE_MOV) {
        printf("Passo %d: Direita\n", i);
        i++;
    }
    printf("\n");

    // Movimentação da Rainha: horizontal para a esquerda
    printf("Movimentação da Rainha (Esquerda):\n");
    int j = 1;
    do {
        printf("Passo %d: Esquerda\n", j);
        j++;
    } while (j <= RAINHA_MOV);

    return 0;
}
