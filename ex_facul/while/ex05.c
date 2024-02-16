#include <stdio.h>

int main(){

    int i = 1, n;

    printf("Digite um numero para iniciar a sequencia: \n");
    scanf("%d", &n);

    while(i <= 5){
        i += 1;
        n = (n - 1) + (n - 2);
        printf("%d, ", n);
    }

    return 0;
}