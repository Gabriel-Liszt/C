#include <stdio.h>

int main(){

    int i;

    printf("Digite aqui um numero inteiro de 1 a 10");
    scanf("%i", &i);

    switch (i) {
        case 1:
        printf("Primeiro");
        break;
        case 2:
        printf("Segundo");
        break;
        case 3:
        printf("Terceiro");
        break;
        case 4:
        printf("Quarto");
        break;
        case 5:
        printf("Quinto");
        break;
        case 6:
        printf("Sexto");
        break;
        case 7:
        printf("Setimo");
        break;
        case 8:
        printf("Oitavo");
        break;
        case 9:
        printf("Nono");
        break;
        case 10:
        printf("Décimo");
        break;
    }

    printf("Seu valor e %i", i);

    return 0;
}