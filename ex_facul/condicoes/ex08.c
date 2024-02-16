#include <stdio.h>

int main(){

    int x, y, z;

    printf("Digite valores para x, y e z: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x < y + z && y < x + z && z < x + y){
        //printf("eh um triangulo");
        if(x == y && y ==x){
            printf("Eh um triangulo equilatero");
        }else if(x == y || x == z || z == y){
            printf("Eh um triangulo isosceles");
        }else{
            printf("Eh um triangulo escaleno");
        }
    }else{
        printf("nao eh um triangulo");
    }

    return 0;
}