#include <stdio.h>

int main(){
    int x, y, z;
    printf("Digite os comprimentos dos 3 lados do triangulo: x, y e z");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y + z || y > x + z || z > x + y ){
        printf("Os valores nao formam um triangulo");
    }else{
        if(x == y && y == z){
            printf("E um triangulo equilatero");
        }else if(x == y || y == z || z == x){
            printf("E um triangulo isosceles");
        }else{
            printf("E um triangulo escaleno");
        }
    }
    return 0;
}