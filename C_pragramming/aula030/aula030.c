#include <stdio.h>

int main(){

    void teste();
    teste();
    teste();

    return 0;
}

void teste(){
    int variavel = 2;
    variavel *= 2;
    printf("%i\n", variavel);
}