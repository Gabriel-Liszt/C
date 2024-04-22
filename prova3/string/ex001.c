#include <stdio.h>
#include <string.h>

void contarOcorrencias(char *str, char ch) {
    int contador = 0;
    //Percorre a string
    while(*str != '\o'){
        if(*str == ch){
            contador++;
        }
        str++;
    }
    printf("O caracter apareceu: %d vezes", contador);
}

int main(){

    char string[200];
    char caracter;

    printf("Digite sua frase \n");
    fgets(string, 200, stdin);

    printf("Digite o char:");
    scanf("%c", &caracter);

    contarOcorrencias(string, caracter);

    return 0;
}