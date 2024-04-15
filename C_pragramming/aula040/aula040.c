#include <stdio.h> 

int main(){

    //definindo uma estrutra
    struct horario{
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    //declarando uma estrutura
    struct horario agora;    

    //atribuindo valores para uma estrutura
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i: %i: %i:", agora.horas, agora.minutos, agora.segundos);

    /*
     operações aritmetica envolvendo estruturas e atribuindo valores de variaveis de outra estrutura para outra estrutura
    */
    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';
    

    printf("%i: %i: %f %c:", depois.horas, depois.minutos, depois.teste, depois.letra);

    return 0;
}