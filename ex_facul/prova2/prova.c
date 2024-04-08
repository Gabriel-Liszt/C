#include <stdio.h>

int analise(int vetor[], int T){
    for(int i = 0; i < T; i++){
        if(vetor[i -1] > vetor[i]){
            return -1;
        }
    }
    return 1;
}

int main(){


    return 0;
}