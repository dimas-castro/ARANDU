//Exemplo de entrada e saida de dados usando vetores
#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    //entrada
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    //saida
    for(i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}