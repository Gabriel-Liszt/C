/*
Escreva um programa que recebe uma string e transforma alguns dos caracteres
em maiúsculos e outros em minúsculos. Faça sorteios com a função rand() para
gerar números aleatórios em C, que serão usados para escolher os índices dos
caracteres que serão alterados. Use a função toupper() para converter o caracter
para maiúsculo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define max 50

void toup(char *str){
    int j = 0;

    for(int i = 0; i < sizeof(str)-1; i++){
        j = rand() % sizeof(str)-1;
        str[j] = toupper(str[j]);
    }
}

int main(){
    srand(time(NULL));

    char string[max];

    fgets(string, max, stdin);

    toup(string);

    puts(string);
    return 0;
}