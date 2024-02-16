#include <stdio.h>

int main(){

    int n1, n2, adicao, sub, mult;
    float div;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    adicao = n1 + n2;
    sub = n1 - n2;
    div = (float)n1 / n2;
    mult = n1 * n2;

    if(n2 == 0){
        printf("ERROR(nao eh possivel dividir um numero por zero)");
    }else{
        printf("adicao = %d\n"
        "subtracao = %d\n"
        "divisao = %.2f\n"
        "multiplicacao = %d\n", adicao, sub, div, mult);
    }

    return 0;
}