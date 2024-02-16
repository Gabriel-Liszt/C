#include <stdio.h>

int main(){

    float S, divisao;
    int n1 = 1, n2 = 1;

    while(n1 <= 99 && n2 <= 50){
        divisao = n1 / n2;
        S = divisao;

        n1 += 2;
        n2 += 1;
    }

    printf("O valor de S eh: %f", S);

    return 0;
}