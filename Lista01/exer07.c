#include <stdio.h>

int main(){
    /*
    exer 7
    Faça um algoritmo que leia um número inteiro e imprima o seu antecessor (inteiro anterior)
    e o seu sucessor (inteiro posterior).
    */

    int num;

    printf("Digite um numero: \n");
    scanf("%i", &num);

    printf("Antecessor: %i \n"
            "Seu numero: %i \n"
            "Sucessor: %i \n", num-1, num, num+1);
    
    return 0;
}