#include <stdio.h>

int main(){

    int fatorando = 20;
    float resposta = 1;

    for ( ;fatorando >= 1; --fatorando) {
        resposta *= fatorando;
    }

    printf("O numero fatorial de 5 e %f", resposta);

    return 0;
}
