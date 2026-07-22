#include <stdio.h>

int main(){
    /*
    exer 3
    Faça um programa que receba como entrada um número inteiro n e exiba o resultado da
    seguinte soma:
    S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
    */

    int n;
    float s;

    printf("Digite o numero: \n");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++){
        s += (1.0 / i);
    }

    printf("%.2f", s);

    return 0;
}