#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3

// Função para preencher uma matriz com valores aleatórios
void preencherMatrizAleatoria(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 100; // Gera números aleatórios entre 0 e 99
        }
    }
}

// Função para calcular a transposta de uma matriz
void calcularTransposta(int matriz[LINHAS][COLUNAS], int transposta[COLUNAS][LINHAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

// Função para exibir uma matriz
void exibirMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("Matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa o gerador de números aleatórios com uma semente única
    srand(time(NULL));

    // Declaração da matriz A e da matriz transposta T
    int matrizA[LINHAS][COLUNAS];
    int matrizT[COLUNAS][LINHAS];

    // Preenche a matriz A com valores aleatórios
    preencherMatrizAleatoria(matrizA);

    // Calcula a transposta da matriz A
    calcularTransposta(matrizA, matrizT);

    // Exibe as matrizes A e T
    printf("Matriz A:\n");
    exibirMatriz(matrizA);

    printf("\nMatriz T (Transposta de A):\n");
    exibirMatriz(matrizT);

    return 0;
}
