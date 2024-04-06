/*#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // Declaração de ponteiro

    ptr = &num; // Atribui o endereço de 'num' ao ponteiro

    printf("Valor de num: %d\n", num); // Imprime o valor de 'num'
    printf("Endereço de num: %p\n", &num); // Imprime o endereço de 'num'
    printf("Valor de num através do ponteiro: %d\n", *ptr); // Imprime o valor de 'num' através do ponteiro

    return 0;
}*/

#include <stdio.h>

int main(){

    int num = 10;
    int *ptr;

    ptr = &num;

    printf("valor de num: %d", num);
    printf("Endereco de num: %p", &num);
    printf("Valor de num + 20: %d", *ptr+20);



    return 0;
}
