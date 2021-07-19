//Exemplo de entrada e saida de matrizes
#include <stdio.h>

int main() {
    int matriz[10][10];
    int i, j;

    //entrada
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    //saida
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d", matriz[i][j]);
        }
    }
    
    return 0;
}