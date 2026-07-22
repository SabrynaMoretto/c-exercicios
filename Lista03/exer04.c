#include <stdio.h>

int main(){
    /*
    exer 4
    Faça um programa que calcule e exiba o valor de S, em que S  ́e dado por:
    S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
    */
    
    float s;
    int numerador = 1;

    for(int denominador = 1; denominador <= 50; denominador++){
        s += (float)numerador / denominador;
        numerador += 2;
    }

    printf("%.5f", s);
    return 0;
}