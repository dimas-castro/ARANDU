//Desafio 2: Números primos entre 0 e 15
#include <stdio.h>

int main() {
    int i, j;
    int aux = 0;

    for(i = 0; i <= 15; i++) {
        for(j = 1; j < i; j++) {
            if (i % j == 0) {
                aux++;
            }
        }
        if (aux == 1) {
            printf("%d\n", i);
        }
        aux = 0;
    }

    return 0;
}