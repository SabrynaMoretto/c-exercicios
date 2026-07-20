#include <stdio.h>

int main(){
    /*
    exer 13
    Uma agência bancária decidiu conceder um crédito especial aos seus clientes de acordo com
    o saldo médio no último ano. Faça um programa que receba o saldo médio de um cliente e
    calcule o valor do crédito, com base na tabela a seguir.
    Saldo Médio                                 Valor do Crédito
    400 reais < saldo médio                     30% do saldo médio
    300 reais < saldo médio <= 400 reais        25% do saldo médio
    200 reais < saldo médio <= 300 reais        20% do saldo médio
    saldo médio <= 200 reais                    10% do saldo médio
    */

    float saldoMedio, credito;

    printf("Digite o saldo medio: \n");
    scanf("%f", &saldoMedio);

    if(saldoMedio > 400){
        credito = saldoMedio * 0.30;
    }
    if(saldoMedio <= 400 && saldoMedio > 300){
        credito = saldoMedio * 0.25;
    }
    if(saldoMedio <= 300 && saldoMedio > 200){
        credito = saldoMedio * 0.20;
    }
    if(saldoMedio <= 200){
        credito = saldoMedio * 0.10;
    }

    printf("Valor do credito especial: %.2f", credito);
    
    return 0;
}