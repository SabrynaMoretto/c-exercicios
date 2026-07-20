#include <stdio.h>

int main(){
    /*
    exer 11
    Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para poder andar
    neles. Em dado parque com 3 brinquedos temos a seguinte limitação:
    • Barca Viking: 1,5m de altura e 12 anos.
    • Elevator of Death: 1,4m de altura e 14 anos.
    • Final Killer: 1,7m de altura ou 16 anos.
    Faça um programa que receba a altura e a idade de uma pessoa, identifique quantos
    brinquedos ele pode andar.
    */

    int idade;
    int cont =  0;
    double altura;

    printf("Digite a altura: \n");
    scanf("%lf", &altura);

    printf("Digite a idade: \n");
    scanf("%i", &idade);

    if(idade >= 12 && altura >= 1.50){
        cont++;
        printf("Aceito na Barca Viking! \n");
    }
    if(idade >= 14 && altura >= 1.40){
        cont++;
        printf("Aceito no Elevator of Death! \n");
    }
    if(idade >=16 || altura >= 1.70){
        cont++;
        printf("Aceito no Final Killer! \n");
    }
    if(cont == 0){
        printf("Nao aceito! \n");
    }
    
    printf("Quantidade de brinquedos permitidos: %i", cont);

    return 0;
}