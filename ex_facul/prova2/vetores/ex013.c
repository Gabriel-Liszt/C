#include <stdio.h>
#define t 10
void procurarelemento(int vetor[], int elemento, int T){
    for(int i = 0; i < T; i++){
        if(vetor[i] == elemento){
            printf("Elemento encontrado no indice %d, com endereco de mem %d\n", i, (void *)&vetor[i]);
        }else{
            printf("Elemento nao encontrado no indice %d.\n", i);
        }
    }
}

int main(){
    int vetor[t] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    procurarelemento(vetor, 20, t);

    return 0;
}