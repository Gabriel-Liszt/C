/*dois vetores A e B, com 10 elementos cada, somar cada elemento e alocar num terceiro vetor C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetorAleatorio(int vetor[], int t){
    for(int i = 0; i < t; i++){
        vetor[i] = rand() % 100;
    }
}

void somarVetor(int vetorA[],int vetorB[], int vetorC[], int t ){
    for(int i = 0; i < t; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    
}

void exibirVetor(int vetor[], int t){
    for(int i = 0; i < t; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(){
    
srand(time(NULL));

int A[10], B[10], C[10];

    vetorAleatorio(A, 10);
    vetorAleatorio(B, 10);
    somarVetor(A, B, C, 10);
    printf("Exibir elementos do vetor A:");
    exibirVetor(A, 10);
    printf("Exibir elementos do vetor B:");
    exibirVetor(B, 10);
    printf("Exibir elementos do vetor C:");
    exibirVetor(C, 10);

    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define t 10

void vetorAleatorio(int vetor[], int T){
    for(int i = 0; i < T; i++){
        vetor[i] = rand() % 100;
    }
}

void somarVetores(int A[], int B[], int C[], int T){
    for(int i = 0; i < T; i++){
        C[i] = B[i] + A[i];
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

    int A[t],B[t], C[t];

    printf("Vetor A: ");
    mostrarVetor(A, t);
    printf("Vetor B:");
    mostrarVetor(B, t);

    somarVetores(A, B, C, t);

    printf("Vetor C:");
    mostrarVetor(C, t);

    return 0;
}