#include <stdio.h>

int main() {
    int a, b;
    
    // Loop para ler pares de números até que ambos sejam zero
    while (1) {
        scanf("%d %d", &a, &b);
        
        // Verifica se ambos os números lidos são zero
        if (a == 0 && b == 0) {
            break; // Se ambos são zero, sai do loop
        }
        
        // Mostra a sequência de acordo com os números lidos
        if (b > a) {
            for (int i = a; i <= b; i++) {
                printf("%d ", i);
            }
        } else {
            for (int i = b; i <= a; i++) {
                printf("%d ", i);
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
