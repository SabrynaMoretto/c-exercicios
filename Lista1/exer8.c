#include <stdio.h>
#include <math.h>

int main(){
    /*
    exer 8
    Faça um programa que receba três valores (a, b e c), calcule e mostre as médias geométrica,
    harmônica e ponderada desses valores. Para a média ponderada, considere os pesos 1, 2 e
    3 para os valores armazenados em a, b e c, respectivamente.
    */

    float a, b, c, geometrica, harmonica, ponderada;

    printf("Digite os valores para a, b e c , respectivamente: \n");
    scanf("%f%f%f", &a, &b, &c);

    geometrica = cbrt(a * b * c);
    harmonica = 3 / ((1 / a) + (1 / b) + (1 / c));
    ponderada = ((1 * a) + (2 * b) + (3 * c)) / 6;

    printf("Resultados: \n"
            "Geometrica: %.2f \n"
            "Harmonica: %.2f \n"
            "Ponderada: %.2f \n", geometrica, harmonica, ponderada);

    return 0;
}