#include <stdio.h>

int main(){
    /*
    exer 3
    Faça um programa que receba como entrada três números positivos em ponto flutuante,
    em seguida, mostre quantos deles estão acima da média aritmética.
    */

    float a, b, c, media;
    int i = 0;

    printf("Digite os tres numeros: \n");
    scanf("%f%f%f", &a, &b, &c);

    media = (a + b + c) / 3;

    if(a > media){
        printf("%.2f eh maior que a media! \n", a);
        i++;
    }
    if(b > media){
        printf("%.2f eh maior que a media! \n", b);
        i++;
    }
    if(c > media ){
        printf("%.2f eh maior que a media! \n", c);
        i++;
    }

    printf("Quantidade acima da media: %i \n", i);

    return 0;
}