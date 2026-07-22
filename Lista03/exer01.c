#include <stdio.h>

int main(){
    /*
    exe1 1
    Faça um programa que receba dois números inteiros representando o intervalo (inicio) e
    (fim) de uma sequência, e depois imprima todos os números  ́ımpares dentro deste intervalo.
    */

    int inicio, fim;

    printf("Digite os numeros do inicio e fim: \n");
    scanf("%i%i", &inicio, &fim);

    while (inicio <= fim){
        if(inicio == fim){
            printf("Os numeros sao iguais!");
            
            return 1;
        }
        if(inicio % 2 == 0){
            inicio++;
        }
        else{
            printf("%i ", inicio);
            inicio++;
        }
    }
    
    return 0;
}