#include <stdio.h>

int main(){
     
    float n1 = 1, n2 = 1, s;

    while(n1 <= 99 && n2 <= 50){
        s = n1 / n2;
        n1 += 2;
        n2 += 1;
    }
    printf("Valor de S: %.2f\n", s);
    return 0;
}
