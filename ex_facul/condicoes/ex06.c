#include <stdio.h>

int main(){

    int h1, h2, m1, m2, soma, produto;

    printf("Digite a idade de dois homens: ");
    scanf("%d %d", &h1, &h2);
    printf("Digite a idade de duas mulheres: ");
    scanf("%d %d", &m1, &m2);

    if(h1 == h2 || m1 == m2){
        printf("ERRO, homens e mulheres precisam ter idades diferentes");
    }else if(h1 > h2 && m1 > m2){
        soma = h1 + m2;
        produto = h2 * m1;
        printf("O valor da soma eh %d, e o valor dio produto eh %d", soma, produto);
    }else{
        soma = h2 + m1;
        produto = h1 * m2;
        printf("O valor da soma eh %d, e o valor dio produto eh %d", soma, produto);
    }


    return 0;
}