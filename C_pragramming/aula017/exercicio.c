#include <stdio.h>

int main(){

    int n1;
    int n2;

    printf("Digite dois numeros inteiros");
    scanf("%i %i", &n1, &n2);

    if (n2 == 0){

        printf("Nao pode ocorrer divisao");
    
    } else{

        if(n1 % n2 == 0){
            printf("Seu primeiro numero e divisiel pelo segundo");
        } else{
            printf("Seu primeiro numero nao e divisel pelo segundo");
        }

    }
    
    return 0;
}