#include <stdio.h>

int main() {
    long int numeroBinario, numeroDecimal = 0;
    int expoente = 0, digito;

    printf("Digite um número binário: ");
    scanf("%ld", &numeroBinario);

    // Converte para decimal
    while (numeroBinario != 0) {
        digito = numeroBinario % 10;
        numeroDecimal += digito << expoente; // Equivalente a: numeroDecimal += digito * pow(2, expoente)
        expoente++;
        numeroBinario /= 10;
    }

    printf("O número decimal equivalente é: %ld\n", numeroDecimal);

    return 0;
}
