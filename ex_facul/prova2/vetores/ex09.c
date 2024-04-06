/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define t 20

void gerarVetor(int vetor[], int T){
    for(int i = 0; i < T; i++){
        vetor[i] = rand() % 100;
    }
}

void tamposi(int maiortamanho, int vetor[], int T){
    int posicaomaior = 0;
    for(int i = 1; i < T; i++){
        if(vetor[i] > maiortamanho){
            maiortamanho = vetor[i];
            posicaomaior = i;
        }
    }
    printf("%d", posicaomaior);
}

void mostrarVetor(int vetor[], int T){
    for(int i = 0; i < T; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){

    srand(time(NULL));

    int V[t];
    int maiortamanho = V[0];

    gerarVetor(V, t);
    printf("Vetor V:");
    mostrarVetor(V, t);

    printf("maior posicao do vetor:");
    tamposi(maiortamanho, V, t);

}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

// Função para preencher um vetor com valores aleatórios
void preencherVetorAleatorio(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Gera números aleatórios entre 0 e 99
    }
}

// Função para encontrar o maior elemento de um vetor e sua posição
void encontrarMaiorElemento(int vetor[], int tamanho, int *maiorElemento, int *posicaoMaior) {
    *maiorElemento = vetor[0]; // Inicializa o maior elemento com o primeiro elemento do vetor
    *posicaoMaior = 0; // Inicializa a posição do maior elemento como 0

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maiorElemento) {
            *maiorElemento = vetor[i];
            *posicaoMaior = i;
        }
    }
}

// Função para exibir o vetor
void exibirVetor(int vetor[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    // Inicializa o gerador de números aleatórios com uma semente única
    srand(time(NULL));

    // Declaração do vetor
    int vetor[TAMANHO];

    // Preenche o vetor com valores aleatórios
    preencherVetorAleatorio(vetor, TAMANHO);

    // Exibe o vetor
    exibirVetor(vetor, TAMANHO);

    // Variáveis para armazenar o maior elemento e sua posição
    int maiorElemento, posicaoMaior;

    // Encontra o maior elemento e sua posição
    encontrarMaiorElemento(vetor, TAMANHO, &maiorElemento, &posicaoMaior);

    // Exibe o maior elemento e sua posição
    printf("O maior elemento do vetor é: %d\n", maiorElemento);
    printf("Sua posição no vetor é: %d\n", posicaoMaior);

    return 0;
}
