#include <stdio.h>

int main(){

    float AreaRetang(float base, float altura);
    float area = AreaRetang(25.0, 10.0);
    printf("A area do retangulo é: %f", area);

    return 0;
}

float AreaRetang(float base, float altura){

float area = base * altura;

return area;
}