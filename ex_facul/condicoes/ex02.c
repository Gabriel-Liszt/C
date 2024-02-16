#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 > n2 && n2 > n3)
    {
        printf("%i eh o maior numero e %i eh o menor", n1, n3);
    }else if(n2 > n1 && n1 > n3){
        printf("%i eh o maior numero e %i eh o menor", n2, n3);
    }else if(n3 > n2 && n2 > n1){
        printf("%i eh o maior numero e %i eh o menor", n3, n1);
    }else{
        printf("%i eh o maior numero e %i eh o menor", n3, n2);
    }

    return 0;
}