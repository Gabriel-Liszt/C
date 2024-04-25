/*
Entendendo a lógica por trás da verificação de igualdade de duas strings
*/

#include <stdio.h>
#include <string.h>
#define MAX 100

_Bool VerificaIgualdade(char string1[], char string2[]){
    int i = 0;

    while(string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0'){
        i++;
    }

    if(string1[i] == '\0' && string2[i] == '\0'){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int resultado;
    char string1[MAX], string2[MAX];
    
    printf("Digite uma frase\n");
    fgets(string1, MAX, stdin);
    printf("Digite outra frase\n");
    fgets(string2, MAX, stdin);

    resultado = VerificaIgualdade(string1, string2);

    printf("%d", resultado);

    return 0;
}