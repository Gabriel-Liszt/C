/*
02.Ler uma frase e contar o número de palavras dessa frase. Considere que as
palavras estão separadas por espaços.

*/

#include <stdio.h>
#include <string.h>

void contarPalavras(char *str){
    int contador = 0;

    //percorre string
    while(*str != '\0'){
        if(*str == ' '){
            contador++;
        }
        str++;
    }

    //mostra o numero de palavras contidas na string
    printf("A string contem %d palavras", contador + 1);
}

int main(){

    char string[300];

    fgets(string, 300, stdin);

    contarPalavras(string);

    return 0;
}