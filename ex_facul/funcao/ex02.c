/*
Escreva um programa que leia dois números e utilize uma função que retorne o maior valor. Mostre o resultado.
*/

#include <stdio.h>

float maior(float num1, float num2){

    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){

    float x, y, m;

    do{
        scanf("%f %f", &x, &y);
        m = maior(x, y);
        printf("%f", m);
    }while(x != 0 && y != 0);

    printf("FIM");



    return 0;
}