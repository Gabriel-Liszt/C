#include <stdio.h>

void ordemCrescente(int vetor[], int n){
    int i, j, temporaria;

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(vetor[i] > vetor[j]){
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            };
    }
}
}

int main(){

    int vetor[10] = {10, 4, 1, 5, 7, 8, 11, 13, 28, 30};
    int i;

    ordemCrescente(vetor, 10);

    for(i = 0; i<10; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}