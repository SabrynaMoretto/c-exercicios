#include <stdio.h>

int main(){
    /*
    exer 6
    Uma pequena mercearia resolveu dar descontos para agradar seus clientes. A mercearia
    contém apenas 4 itens, cujos preços são dados pela Tabela 1.
    A regra de desconto  ́e bem simples: se a quantidade de produtos comprados for igual ou
    maior que 15, então o desconto  ́e concedido. O desconto também  ́e concedido caso o valor
    total da compra seja maior ou igual R$ 40,00. O valor do desconto ́e de 15%.
    Faça um programa que leia o código do produto, a quantidade comprada e exiba o valor
    que o cliente deve pagar, já considerando o desconto quando aplicável. Considere que o
    cliente só pode comprar um  ́unico tipo produto cada vez que usar o seu software.
    Código          Preço unitario
    1               R$5,30
    2               R$6,00
    3               R$3,20
    4               R$2,50
    */

    float codValor, valor, desconto;
    int cod, quantidade;

    printf("Insira o codigo do produto e a quantidade comprada: \n");
    scanf("%i%i", &cod, &quantidade);

    switch (cod){
    case 1:
        codValor = 5.30;
        break;
    
    case 2:
        codValor = 6;
        break;

    case 3:
        codValor = 3.20;
        break;
    
    case 4:
        codValor = 2.50;
        break;

    default:
        printf("Codigo invalido!");
        return 1;
    }

    valor = codValor * quantidade;

    if(quantidade >= 15 || valor >= 40){
        desconto = valor -  (valor * 0.15);
        printf("Valor que deve ser pago: %.2f", desconto);
    }
    else{
        printf("Sem desconto. Valor que deve ser pago: %.2f", valor);
    }

    return 0;
}