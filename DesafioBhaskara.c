//Desafio 1: Resolução de equação de segundo grau
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double delta;

    scanf("%d %d %d", &a, &b, &c);

    if (a != 0) {
        delta = pow(b, 2) - 2 * a * c;

        if (delta < 0) {
            printf("Nao existe solucao");
            return 0;
        } else if (delta == 0) {
            double x;

            x = (-b + sqrt(delta)) / (2 * a);

            printf("x = %lf", x);
        } else {
            double x1, x2;

            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("x1 = %lf\nx2 = %lf\n", x1, x2);
        }
    } else {
        printf("Nao existe solucao");
        return 0;
    }

    return 0;
}