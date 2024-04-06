#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define t 20

void gerarVetor(int vetor[], int T){
    for(int i = 0; i < T; i++){
        vetor[i] = rand() % 100;
    }
}

void inverterVetor(int A[], int B[], int T){
    int i =0, j = 19;
    while(i < T && j >= 0){
        B[j] = A[i];
        i++;
        j = j-1;
    }
}

void mostrarVetor(int vetor[], int T){
    for(int i = 0; i < T; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){

    srand(time(NULL));

    int A[t], B[t];

    gerarVetor(A, t);
    gerarVetor(B, t);

    inverterVetor(A, B, t);
    printf("Mostrar vetor A:");
    mostrarVetor(A, t);
    printf("Mostrar vetor B:");
    mostrarVetor(B, t);

    return 0;
}