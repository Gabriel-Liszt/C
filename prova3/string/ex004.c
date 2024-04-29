/*
Escreva um programa que receba uma frase com caracteres em minúsculo e
transforme o primeiro caractere de cada palavra da frase em maiúsculo.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100


void maiusculo(char *str){
    int i;

    for(i = 0; str[i] != '\0'; i++){
        if((i == 0 || str[i - 1] == ' ') && str[i] != ' '){
            str[i] = toupper(str[i]);
        }
    }                                                                                                    

}

int main(){

    char str[MAX];

    fgets(str, MAX, stdin);

    maiusculo(str);

    puts(str);

    return 0;
}


