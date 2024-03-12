/*
Faça um programa contendo uma função que receba 3 inteiros a, b, c,sendo a maior que 1. A função deverá somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e retornar o resultado para ser mostrado na função main().
*/

#include <stdio.h>

int soma(int a, int b, int c){

    int sominha = 0;

    for(int i = b; i <= c; i++){

        if(i % a == 0){
            sominha += i;
        }

    }
    
    return sominha;
}

int main(){

    int x, y, z, s;

    printf("Digite um numero maior que 1");
    scanf("%d", &x);
    printf("Digite dois numeros");
    scanf("%d %d", &y, &z);

    s = soma(x, y, z);

    printf("A soma entre os numeros eh: %d", s);

    return 0;
}