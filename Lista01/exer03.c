#include <stdio.h>
#include <math.h>

int main(){
    /*
    exer 3
    Faça um programa que receba as coordenadas de dois pontos (A e B) no plano cartesiano,
    calcule e mostre distância entre esses dois pontos. Para calcular da distância (d) entre dois
    pontos (A e B), temos:
    d(A,B)  = sqrt((x2-x1)^2 + (y2-y1)^2)
    */

    float xA, yA, xB, yB, dAB;
    
    printf("Digite o valor de x e y do ponto A: \n");
    scanf("%f%f", &xA, &yA);

    printf("Digite o valor de x e y do ponto B: \n");
    scanf("%f%f", &xB, &yB);

    dAB = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));

    printf("Resultado da distancia: %.2f", dAB);

    return 0;
}