#include <stdio.h>

int main(){
    /*
    exer 14
    Faça um programa que receba o trajeto em km percorrido por um veículo, o tipo do veículo
    e mostre o consumo estimado de combustível, sabendo-se que um veículo tipo A faz 15 km
    com um litro de gasolina, um veículo tipo B faz 12 km e um veículo tipo C, 10 km por litro.
    */

    float trajeto, consumo;
    char veiculo;

    printf("Digite o tipo do veiculo (a, b ou c): \n");
    scanf("%c", &veiculo);
    printf("Digite o trajeto (km) percorrido: \n");
    scanf("%f", &trajeto);

    if(veiculo == 'a'){
        consumo = trajeto / 15;
    }
    if(veiculo == 'b'){
        consumo = trajeto / 12;
    }
    if(veiculo == 'c'){
        consumo = trajeto / 10;
    }
    else{
        printf("Esse tipo de veiculo nao existe! \n");
    }

    printf("O consumo eh de: %.2f litros", consumo);

    return  0;
}