/*
Faça um programa que mostre se um número é par ou ímpar utilizando uma função. A função retorne 0 se o número for par ou 1 se o número for ímpar.
*/

#include <stdio.h>

int parimpar(int num){
    if(num % 2 == 0){
        printf("0");
    }else{
        printf("1");
    }

    return main;
}

int main(){

    int x;

    do{
    scanf("%d", &x);
    parimpar(x);
    }while(x != 0);
    



    return 0;
}