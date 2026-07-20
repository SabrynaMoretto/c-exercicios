#include <stdio.h>

int main(){
    /*
    exer 2
    Faça um programa que receba como entrada três números inteiros e, em seguida, exiba o menor deles.
    */
    
    int a, b, c;

    printf("Digite os tres numero: \n");
    scanf("%i%i%i", &a, &b, &c);

    if(a < b && a < c){
        printf("%i eh o menor numero!", a);
    }
    else if(b < a && b < c){
        printf("%i eh o menor numero!", b);
    }
    else{
        printf("%i eh o menor numero!", c);
    }

    return 0;
}