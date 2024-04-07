#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 3

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

void menorElemento(int matriz[][T], int *menorE){
    *menorE = matriz[0][0];

    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(matriz[i][j] < *menorE){
                *menorE = matriz[i][j];
            }
        }
    }

}

void novamatriz(int matriz [][3], int matrizR[3][3], int menorE){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrizR[i][j] = matriz[i][j] * menorE;
        }
    }
}

int main(){

    srand(time(NULL));

    int M[T][T], nova[T][T], menorelemento;

    gerar(M);
    printf("Matriz M: \n");
    mostrarMatriz(M);
    menorElemento(M, &menorelemento);
    novamatriz(M, nova, menorelemento);
    printf("Matriz R: \n");
    mostrarMatriz(nova);

    return 0;
}