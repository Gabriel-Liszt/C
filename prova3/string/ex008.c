/*
Crie um programa que receba uma string e um caractere, e apague todas as
ocorrências desses caractere na string.
*/


#include <stdio.h>
#include <string.h>

#define max 20

void apaga(char *str, char carac){
    int j = 0;
    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == carac){
            str[i] = str[j++];
        }
    }
}

int main(){
    char str[max], carac;

    fgets(str, max, stdin);
    scanf("%c", &carac);

    apaga(str, carac);
    puts(str);
    
    return 0;
}