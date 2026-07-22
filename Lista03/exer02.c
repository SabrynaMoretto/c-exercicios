#include <stdio.h>

int main(){
    /*
    exer 2
    Faça um programa que receba 2 números inteiros quaisquer representados por x e y e
    mostre, em ordem crescente, todos os números entre x e y cujo resto da divisão deles por
    5 for igual a 2 ou igual a 3.
    */

    int x, y, aux;

    printf("Digite os valores para x e y: \n");
    scanf("%i%i", &x, &y);

    if(y < x){
        aux = y;
        y = x;
        x = aux;
    }

    x++;
    printf("x = %d, y = %d\n", x, y);
    while(x < y){
        if(x % 5 == 2 || x % 5 == 3){
            printf("%i ", x);
        }
         x++;
    }
    
    return 0;
}