/*
Escreva um programa que receba o nome completo de um usuário e gere o
seu login. O login será composto pela primeira letra de cada nome em letras
maiúsculas e as mesmas letras minúsculas. O login deve estar em uma nova
string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max 100

void crialog(char *str, char *login){

    int j = 0;
    int fim = strlen(str) - 1;
    for(int i = 0; i < fim; i++){
        if(str[i - 1] == ' ' || i == 0){
            login[j] = toupper(str[i]);
            j++;
        }
    }

    //printf("%d", j);
    for(int i = 0; i < j; i++){
        login[j + 1] = tolower(login[i]);
    }

    login[j+1] = '\0';

}

int main(){

    char string[max], login[max];

    fgets(string, max, stdin);

    crialog(string, login);

    puts(login);

    return 0;
}