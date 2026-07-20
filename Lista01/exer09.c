#include <stdio.h>

int main(){
    /*
    exer 9
    Faça um programa que receba o preço de um produto e o percentual de desconto, depois calcule e mostre o preço final após o desconto.
    */

    float preco, desconto, precoFinal;

    printf("Digite o preco e o desconto, respectivamente: \n");
    scanf("%f%f", &preco, &desconto);

    precoFinal =  preco - (preco * (desconto / 100));

    printf("Preco com desconto aplicado: %.2f", precoFinal);
    return 0;
}