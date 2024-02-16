#include <stdio.h>

int main(){

    for(int i = 1; i <= 20; i++){
        printf("Volta %i \n", i);
        for(int j = 1; j <= 20; j++){
            printf("Ponto %i \n", j);
        }
    }

    return 0;
}