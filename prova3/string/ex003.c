/*
Faça um programa que calcule e mostre o número de vogais de uma string. Feito
isso, o programa deve criptografar uma frase dada pelo usuário (a criptografia troca
as vogais da frase por *
*/

#include <stdio.h>
#include <string.h>


void numVogal(char *str){

    int contador = 0;

    //percorre a string
    while(*str != '\0'){
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
            contador++;
        }
        str++;
    }
    printf("A string contem  %d vogais", contador);
}

void criptografar(char *str){
    
    //percorrer a string novamente
    while(*str != '\0'){
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
            *str = '*';
        }
        str++;
    }
}

int main(){

    char string[200];

    fgets(string, 200, stdin);

    //chama a função para mostrar o numero de vogais que a string possui
    numVogal(string);

    //chama função  para executar a criptografia
    criptografar(string);

    //mostra a string
    puts(string);

    return 0;
}