#include <stdio.h>

int main(){
    /*
    exer 6
    Faça um programa que receba a distância total percorrida em km e o total de combustível
    gasto em litros, calcule e mostre o consumo médio de um veículo.
    */

    float distanciaPercorrida, totalCombustivel, consumoMedio;

    printf("Digite a distencia percorrida (em km) e o total de combustivel gasto (em litros): \n");
    scanf("%f%f", &distanciaPercorrida, &totalCombustivel);

    consumoMedio = distanciaPercorrida / totalCombustivel;

    printf("O consumo medio eh de %.2f km/L", consumoMedio);
    
    return 0;
}