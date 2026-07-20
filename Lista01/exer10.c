#include <stdio.h>
#include <math.h>

int main(){
    /*
    exer 10
    O ındice de massa corporal (IMC) ́e usado para identificar o peso ideal de uma pessoa. Ele é calculado 
    dividindo a massa pelo quadrado da altura. Por exemplo, suponha que uma pessoa tenha 1,81m de altura e
    77kg de massa. O IMC seria:
            77 / 1.81^2 é aproximadamente 23.50
    Faça um programa que, dada a massa e altura de uma pessoa, imprima o seu IMC.
    */

    float peso, altura, imc;

    printf("Digite o peso e altura, respectivamente: \n");
    scanf("%f%f", &peso, &altura);

    imc = peso / pow(altura, 2);

    printf("Resultado: %.2f \n", imc);

    return 0;
}