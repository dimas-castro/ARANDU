//Exemplo do uso de If
#include <stdio.h>

int main(){
    int nota;

    scanf("%d", &nota);

    if(nota >= 5) {
        printf("Você passou\n");
    } else {
        printf("Você não passou\n");
    }

    return 0;
}