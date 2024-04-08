#include <stdio.h>

void endereco(int vetor[], int T){
    printf("mostrar endereco do array");
    for(int i = 0; i < T; i++){
        printf("%d  ", (void *)&vetor[i]);
    }
}

int main(){
    int A[10];

    endereco(A, 10);

    return 0;
}

