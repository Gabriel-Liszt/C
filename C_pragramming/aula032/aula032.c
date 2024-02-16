#include <stdio.h>

int gVariavelglobal = 2;

int main(){

    void teste();
    
    printf("Global = %i\n", gVariavelglobal);
    teste();
    teste();
    teste();
    teste();

    return 0;
}

void teste(){

    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    printf("Local automatica = %i\n", variavelLocalAutomatica);
    printf("Local estatica = %i\n", variavelLocalEstatica);
    printf("Global = %i\n", gVariavelglobal);
}