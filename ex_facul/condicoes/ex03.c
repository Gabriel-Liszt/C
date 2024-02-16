#include <stdio.h>

int main(){

    int n1 , n2, n3, soma;

    printf("digite 3 valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 > n2 && n2 > n3){
        soma = n1 + n2;
        printf("O resultado da soma dos dois maiores eh %d", soma);
    }else if(n2 > n1 && n1 > n3){
        soma = n2 + n1;
        printf("O resultado da soma dos dois maiores eh %d", soma);
    }else if(n3 > n1 && n1 > n2){
        soma = n3 + n1;
        printf("O resultado da soma dos dois maiores eh %d", soma);
    }else if(n1 > n3 && n3 > n2){
        soma = n1 + n3;
        printf("O resultado da soma dos dois maiores eh %d", soma);
    }else{
        soma = n2 + n3;
        printf("O resultado da soma dos dois maiores eh %d", soma);
    }

    return 0;
}