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

void mostrardiagonal(int matriz[][3], int *D[], int T){
    int soma = 0, i = 0, j = 0;

    while(i < 3){
        soma += matriz[i][j];
        D[i] = matriz[i][j]; 
        i++;
        j++;
    }
    for(int z = 0; z < 3; z++){
        printf("%d ", D[z]);
    }
    printf("\n");
    printf("soma = %d", soma);  
    
}

int main(){

    srand(time(NULL));

    int A[3][3], D[3];

    gerar(A);
    mostrarMatriz(A);
    mostrardiagonal(A, &D, 3);


    return 0;
}