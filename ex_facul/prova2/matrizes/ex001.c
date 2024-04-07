#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz(int matriz[4][5]){
    for(int i =0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
        }
    }
    
}

void maiorElemento(int matriz[4][5]){
    int maiorelemento = matriz[0][0];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if(matriz[i][j] > maiorelemento){
                maiorelemento = matriz[i][j];
            }
        }
    }
    printf("%d", maiorelemento);
}

void mostrarMatriz(int matriz[][5]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("%3.d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){

    srand(time(NULL));

    int A[4][5];

    gerarMatriz(A);
    mostrarMatriz(A);
    printf("\n");
    printf("Maior elemento: ");
    maiorElemento(A);

    return 0;
}