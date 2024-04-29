/*
Escreva um programa que receba uma string (palavra), determine se ela é
palí

ndromo. Um palíndromo é uma palavra que tenha a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Ex.: arara,
ovo, anilina, salas.
*/

/*
#include <stdio.h>
#include <string.h>

#define MAX 30

int palindromo(char *str){
    int i;
    int fim = strlen(str) - 1;

    for(i = 0; i < fim; i++){

        if(str[i] != str[strlen(str)-i-2]){
            return 0;
        }

    }  
        return 1;
}


int main(){

    char string[MAX];

    fgets(string, MAX, stdin);

    if(palindromo(string)){
        printf("eh palindromo");
    }else{
        printf("nao eh palindromo");
    }

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

#define max 50

int pali(char *str){

    for(int i = 0; i < strlen(str)-1; i++){
    
        if(str[i] != str[strlen(str)-i -2]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[max];

    fgets(str, max, stdin);

    if(pali(str)){
        printf("eh palindromo");
    }else{
        printf("nao eh palindromo");
    }

    return 0;
}