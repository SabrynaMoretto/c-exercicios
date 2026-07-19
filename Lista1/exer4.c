#include <stdio.h>

int main(){
    /*
    exer 4
    Faça um programa que leia dois valores x e y e permute o conteúdo das duas variáveis,
    ou seja, o valor de x ser armazenado em y e vice-versa. Ao final, mostre o conteúdo das
    variáveis.
    */

    int x, y, a;

    printf("Digite o valor para x e y, repectivamente: \n");
    scanf("%i%i", &x, &y);

    a = x;
    x  = y;
    y = a;

    printf("Resultado: \n"
            "x = %i \n"
            "y = %i  \n", x, y);
    return 0;
}
