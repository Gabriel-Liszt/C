#include <stdio.h>
#define t 5

void concatenaVetor(int vetorA[], int vetorB[], int *novovetor[], int T){
    int *novotamanho = T + T;
    int *novovetor[novotamanho];

    for(int i = 0; i < T; i++){
        *novovetor[i] = vetorA[i];
    }

    for(int i = 0; i < T; i++){
        *novovetor[T + i] = vetorB[i];
    }   
}

void mostrar_vetor(int vetor[], int tamanho){
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
} 


int main(){
    int A[t], B[t], C[t];
    int novotamanho;
    concatenaVetor(A, B, &C, t);
    printf("Vetor A: ");
    mostrar_vetor(A, t);
    printf("Vetor B: ");
    mostrar_vetor(B, t);
    printf("Vetor C: ");
    mostrar_vetor(C, novotamanho);

    return 0;
}