#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(sizeof(int)); // Aloca memória dinamicamente para um inteiro

    if (ptr == NULL) {
        printf("Falha ao alocar memória.");
        exit(1);
    }

    *ptr = 20; // Atribui um valor ao espaço de memória alocado

    printf("Valor através do ponteiro: %d\n", *ptr);

    free(ptr); // Libera a memória alocada

    return 0;
}
