#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminante, raiz1, raiz2, ParteReal, ParteImaginaria;
    printf("Ingresa los coeficientes a, b y c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminante = b * b - 4 * a * c;

    // Condicion para raices reales y diferentes
    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("raiz1 = %.2lf y raiz2 = %.2lf", raiz1, raiz2);
    }

    // Condicion para la raiz real e igual
    else if (discriminante == 0) {
        raiz1 = raiz2 = -b / (2 * a);
        printf("raiz1 = raiz2 = %.2lf;", raiz1);
    }

    // si las raices son no reales
    else {
        ParteReal = -b / (2 * a);
        ParteImaginaria = sqrt(-discriminante) / (2 * a);
        printf("raiz1 = %.2lf+%.2lfi y raiz2 = %.2f-%.2fi", ParteReal, ParteImaginaria, ParteReal, ParteImaginaria);
    }

    return 0;
} 
