#include <stdio.h>

int main(){
    /*
    exer 10
    Toda apresentação de trabalho tem seus requisitos mínimos que precisam ser atendidos,
    caso contrário, ele não é aceito e o aluno fica com nota 0. Suponha uma apresentação de
    Programação com os seguintes requisitos mínimos:

    Requisito 1: Inferface gráfica OU Inteligência Artificial.
    Requisito 2: Encapsulamento E Indentação
    Requisito 3: Uso de Structs

    Dada a entrada, descubra se o aluno ficou com 0 ou o seu trabalho será avaliado. A entrada
    é composta de 5 números, representando respectivamente Interface Gráfica, Inteligência
    Artificial, Encapsulamento, Indentação e Structs. Os números podem ser: 0 - Se o trabalho
    não possui tal quesito. 1 - Se o trabalho possui tal quesito.
    */

    int interface, ia, encapsulamento, identacao, structs;

    printf("Responda tudo com 1 (sim) ou 0 (nao) \n");
    printf("Possui interface grafica? \n");
    scanf("%i", &interface);

    printf("Possui inteligencia artifical? \n");
    scanf("%i", &ia);

    printf("Possui encapsulamento? \n");
    scanf("%i", &encapsulamento);

    printf("Possui identcao? \n");
    scanf("%i", &identacao);

    printf("Possui structs? \n");
    scanf("%i", &structs);

    if ((interface == 1 || ia == 1) && (encapsulamento == 1 && identacao == 1) && structs == 1){
        printf("O trabalho segue os requsitos minimos e sera avaliado!");
    }
    else{
        printf("O trabalho nao segue os requisitos minimos!");
    }
    
    return 0;
}