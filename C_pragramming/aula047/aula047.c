/*
O objetivo dessa aula é aprender a lógica por tras da concatenação de strings
*/

#include <stdio.h>
#include <string.h>
#define MAX 60

void ConcatenaString(char string1[], int t1, char string2[], int t2, char string3[], int t3){

    int concat = t1 + t2;
    int m = 0;
    for(int i = 0; i < t1; i++){
        string3[i] = string1[i];
    }

    for(int j = t1; j < concat; j++){
        string3[j] = string2[m];
        m++;
    }

}

int main(){

    char frase1[7] = {'E','u',' ','a','m','o',' '};
    char frase2[9] = {'m','i','n','h','a', ' ', 'B', 'i', 'a'};
    char novaFrase[16];

    ConcatenaString(frase1, 7, frase2, 9, novaFrase, 16 );

    for(int i = 0; i < 16; i++){
        printf("%c", novaFrase[i]);
}

    return 0;
}