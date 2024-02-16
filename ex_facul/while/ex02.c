#include <stdio.h>


int main(){

    float matrad;
    int contador = 0, seg;

    printf("Digite a massa do seu material radiotivo em gramas: ");
    scanf("%f", &matrad);

    printf("A massa inicial do material radioativo foi: %f\n", matrad);

    while(matrad > 0.5){
        contador += 1;
        matrad = matrad / 2;
    }  
    
    seg = contador * 50;
    
    printf("A massa final foi: %f\n", matrad);
    printf("O tempo levado para ele chegar a %f em segundos foi: %d\n", matrad, seg);

    return 0;
}