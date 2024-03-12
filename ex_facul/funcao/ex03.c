/*
Crie um programa contendo uma função que receba 3 números e retorneo maior valor. Atenção: use a função escrita da questão 2.
*/

#include <stdio.h>

int maior(int num1, int num2, int num3){

    if(num1 > num2 && num1 > num3){
        return num1;
    }else if(num2 > num1 && num2 > num3){
        return num2;
    }else{
        return num3;
    }
}

int main(){

    int x, y, z, m;

    scanf("%d %d %d", &x, &y, &z);

    m = maior(x, y, z);

    printf("%d", m);

    return 0;
}