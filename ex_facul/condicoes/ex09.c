#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    float d, raiz, raiz1, raiz2;

    printf("Digite os coeficientes a, b e c de uma equacao do 2 grau: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (b * b) - 4 * a * c;

    if(d < 0 ){
        printf("Nao ha solucao real pois nao existe raiz quadrada de um" "numero negativo");
    }else if(d == 0){
        raiz = -b / (2 * a);
        printf("Ha duas solucoes iguais: %f e %f", raiz, raiz);
    }else{
        raiz1 = (-b + sqrt(d)) / 2 * a;
        raiz2 = (-b - sqrt(d)) / 2 * a;
        printf("Ha duas solucoes reais e diferentes: %f e %f", raiz1, raiz2);
    }


    return 0;
}