#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    /*
    exer 2
    Faça um programa que leia o raio de uma círculo, calcule e mostre o seu perímetro (p) e sua ́area (a). Lembrando que:
        p = 2 * pi * raio
        a = pi * raio^2
    */

    float raio, p, a;
    
    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);

    p = 2 * M_PI * raio;
    a = M_PI * pow(raio, 2);

    printf("Resulltados: \n"
            "Perimetro: %.2f \n"
            "Raio: %.2f \n", p, a);
    return 0;
}