#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    struct horario
    {
        int hora;
        int minuto;
        int segundos;
    }agora[5];


    //gera valores para a struct agora
    for(int i = 0; i < 5; i++){
        agora[i].hora = rand() % 24;
        agora[i].minuto = rand() % 60;
        agora[i].segundos = rand() % 60;
    }

    //mostra valores armazenados em cada variavel da struct declarada
    for(int i = 0; i < 5; i++){
        printf("hora[%d] : %d\n", i, agora[i].hora);
        printf("minuto[%d] : %d\n", i, agora[i].minuto);
        printf("segundo[%d] : %d\n", i, agora[i].segundos);
        printf("\n\n");
    }

    return 0;
}