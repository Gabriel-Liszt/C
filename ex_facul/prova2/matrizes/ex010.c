 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define T 5

void gerarMatriz(int matriz[][T]){
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            matriz[i][j] = rand() % 100;
        }
    }
}

void mostrarMatriz(int matriz[][T]){
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            printf("%3.d", matriz[i][j]);
        }
        printf("\n");
    }
}

void Lzero(int matriz[][T], int *cont){
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(matriz[i][j]){
                *cont++;
            }
        }
    }
}

void Czero(int matriz[][T], int *cont){
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(matriz[i][j]){
                *cont++;
            }
        }
    }
}

void parLinha(int matriz[][T], int *contador){
    int i, j;
    printf("Qual linha vc deseja?");
    scanf("%d", &i);
    for(j = 0; j < T; j++){
        if(matriz[i][j] % 2 == 0){
            *contador++;
        }
    }
    
}

void parColuna(int matriz[][T], int *contador){
    int i, j;
    printf("Qual coluna vc deseja?");
    scanf("%d", &j);
    for(i = 0; i < T; i++){
        if(matriz[i][j] % 2 == 0){
            *contador++;
        }
    }
}

 int main(){
    srand(time(NULL));
    int A[T][T], contadorL = 0, contadorC = 0, contadorLpar = 0,contadorCpar = 0;

    gerarMatriz(A);
    mostrarMatriz(A);
    printf("\n");
    Lzero(A, &contadorL);
    printf("Quantidade de 0 em cada Linha: %d", contadorL);
    printf("\n");
    Czero(A, &contadorC);
    printf("Quantidade de 0 em cada Coluna: %d", contadorC);
    printf("\n");
    parLinha(A, &contadorLpar);
    printf("O numeros de pares na linha desejada: %d", contadorLpar);
    parColuna(A, &contadorCpar);
    printf("O numeros de pares na coluna desejada: %d", contadorCpar);

    return 0;
 }