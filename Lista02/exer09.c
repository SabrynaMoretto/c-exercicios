#include <stdio.h>

int main(){
    /*
    exer 9
    Faça um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano,
    indicando à qual quadrante ele pertence. Imprima o quadrante correspondente que estas
    coordenadas pertencem, que pode ser: primeiro, segundo, terceiro, quarto, eixo x, eixo y,
    origem. Será eixo x quando a coordenada y for zero. Será eixo y quando a coordenada x
    for zero. Os outros basta achar a localização do ponto no plano cartesiano.
    */

    float x, y;

    printf("Digite os valores de x e y, respectivamente: \n");
    scanf("%f%f", &x, &y);

    if(x > 0 && y > 0){
        printf("O ponto pertence ao quadrante 1");
    }
    else if(x < 0 && y > 0){
        printf("O ponto pertence ao quadrante 2");
    }
    else if(x < 0 && y < 0){
        printf("O ponto pertence ao quadrante 3");
    }
    else if(x > 0  && y < 0){
        printf("O ponto pertence ao quadrante 4");
    }
    else if(x == 0 && y != 0){
        printf("O ponto pertence ao eixo y");
    }
    else if(x != 0 && y == 0){
        printf("O ponto pertence ao eixo x");
    }
    else{
        printf("Ponto origem!");
    }
}