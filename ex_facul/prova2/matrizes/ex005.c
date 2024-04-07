#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerar(int matriz[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = rand() % 100;
        }
    }
}

void mostrarMatriz(int matriz[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%3.d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void maiorlinha(int matriz[][3]){
    int somaLinha = 0, maiorLinha = 0, Linha = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            somaLinha = matriz[i][j];
        }

        if(somaLinha > Linha){
            Linha = somaLinha;
            maiorLinha = i;
        }

        somaLinha = 0;
    }
    printf("%d", maiorLinha);
}

int main(){

    srand(time(NULL));

    int A[3][3];

    gerar(A);
    mostrarMatriz(A);
    maiorlinha(A);

    return 0;
}