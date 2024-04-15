#include <stdio.h> 

int main(){

    //definindo uma estrutra
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    //declarando uma estrutura
    struct horario agora;    

    //atribuindo valores para uma estrutura
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i: %i: %i:", agora.horas, agora.minutos, agora.segundos);


    return 0;
}