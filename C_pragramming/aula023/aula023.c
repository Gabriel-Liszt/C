#include <stdio.h>

int main(){

    int vetor[50];

    for(int i = 0; i <= 50; i++){
        printf("Volta %i \n", vetor[i]);
        printf("\n");
        for(int j = 0; j <=50; j++){
            printf("Ponto %i \n", j);
        }
    }



    return 0;
}