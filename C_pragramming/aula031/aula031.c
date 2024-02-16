#include <stdio.h>

int main(){

    void teste();
    teste();
    teste();
    teste();
    teste();
    teste();

    return 0;
}

void teste(){
    int variavel = 2;
    variavel *= 2;
    static int variavel_local_estatica = 2;
    variavel_local_estatica *= 2;
    printf("%i\n", variavel);
    printf("%i\n", variavel_local_estatica);
}