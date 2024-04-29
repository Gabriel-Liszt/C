/*
Fazer um programa para ler uma string e um caracter qualquer. Construir um
vetor (OC) contendo as posições (índices) de onde ocorre o caracter na string.
Exemplo: Seja a string "abracadabra!!!" e o caracter 'a', então o vetor de índices OC
deverá conter os seguintes valores: { 0 3 5 7 10 -1}. O valor -1 indica final de vetor,
ou seja, que não existem mais ocorrências. Caso, não exista nenhuma ocorrência,
deve ser armazenado o valor -1 no vetor.
*/

#include <stdio.h>
#include <string.h>

#define max 20

void vetorOC(char *str, char carac, int *vetor){
    int j = 0;
    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == carac){
            vetor[j] = i;
            j++;
        }
    }

    if(j == 0){
        vetor[0] = -1;
    }else{
        vetor[j] = -1;
    }
}

int main(){
    char str[max], carac;
    int OC[max];

    fgets(str, max, stdin);
    scanf("%c", &carac);

    vetorOC(str, carac, OC);

    printf("vetor de ocorrencias{ ");
    for(int i = 0; OC[i] != -1; i++){
        printf(" %d,", OC[i]);
    }
    printf(" -1}");
    
    return 0;
}