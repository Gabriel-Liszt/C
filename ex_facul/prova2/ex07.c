#include <stdio.h>


int vetorIntercalado(int vetorA[], int vetorB[], int T){

    int vetorC[10], j = 0, k = 0;

    for(int i = 0; i < T; i++){
        while(i < j){
            vetorC[k] = vetorB[j] - vetorA[i];
        }
        j++;
        k++;
    } 

    
}


int main(){

    int vetorA[10], vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("Digite dois valores para A e B 10 vezes, onde B sempre maior que A");
        scanf(" %d %d", &vetorA[i], &vetorB[i]);
    }



    return 0;
}