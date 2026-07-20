#include <stdio.h>

int main(){
    /*
    exer 12
    Faça um programa que receba como entrada 3 números inteiros e exiba esses números em
    ordem decrescente. Desafio: tente utilizar apenas 4 comandos if.
    */

    int a, b, c, aux;

    printf("Digite os tres numeros: \n");
    scanf("%i%i%i", &a, &b, &c);
    
    if(a < b){
        aux = a;
        a = b;
        b = aux;
    }

    if(a < c){
        aux = a;
        a = c;
        c = aux;
    }

    if(b < c){
        aux = b;
        b = c;
        c = aux;
    }

    printf("Ordem decrescente: %i, %i, %i", a, b, c);

    return 0;
}