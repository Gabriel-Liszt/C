#include <stdio.h>

int main(){

    float notas[5];
    float total = 0;
    float media;

    printf("Digite aqui 5 numeros; ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%f", &notas[i]);
        total += notas[i];
    }

    media = total / 5;

    printf("A media das 5 notas e: %f", media);

    return 0;
}