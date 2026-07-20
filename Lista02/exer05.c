#include <stdio.h>

int main(){
    /*
    exer 5
    Faça um programa que receba como entrada 3 números reais maiores que zero correspondendo
    ao comprimento dos lados do triângulo, em seguida, classifique-o em:
    1. equilátero (os três lados de comprimentos iguais) ou
    2. isósceles (dois lados de comprimentos iguais) ou
    3. escaleno (os três lados de comprimentos diferentes)
    */

    int a, b, c;

    printf("Digite o comprimento dos lados do triangulo: \n");
    scanf("%i%i%i", &a, &b, &c);

    if(a == b && b == c && a == c){
        printf("O triangulo eh equilatero!");
    }
    else if(a == b || a == c || b == c){
        printf("O triangulo eh isosceles!");
    }
    else{
        printf("O triangulo eh escaleno!");
    }

    return 0;
}