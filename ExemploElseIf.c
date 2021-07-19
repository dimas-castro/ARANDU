//Exemplo da concatenação de If's
#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (x >= 8) {
        printf("Muito Satisfatorio\n");
    } else if (x >= 5) {
        printf("Satisfatorio\n");
    } else {
        printf("Insatisfatorio\n");
    }

    return 0;
}