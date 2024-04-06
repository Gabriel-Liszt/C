#include <stdio.h>

int main(){

    int n1, n2, n3, i = 1;

    printf("Digite o primeiro termo e segundo termo da sequencia: ");
    scanf("%d %d", &n1, &n2);

    printf("%d, %d, ", n1, n2);
    while(i < 20){
        i += 1;
        n3 = n1 + n2;
        printf("%d, ", n3);
        n1 = n2;
        n2 = n3;
    };

    return 0;
}