#include <stdio.h>
#include <math.h>

int main(){
    /*
    exer 1
    Implemente um programa que leia as vari ́aveis a, b e c e imprima os valores das quatros fórmulas seguintes:
        A) (a * b) / c  
        B) a^2 + b + 5c
        C) a * b * c + b + c/3 * 5 - 1
        D) (a * b * c)^3 / 2
   
    */

    float a, b, c, A, B, C, D;
    
    printf("Digte os numeros para a, b e c, respectivamente: \n");
    scanf("%f%f%f", &a, &b, &c);

    A = (a*b) / c;
    B = pow(a, 2) + b + (5*c);
    C = (a * b *c) + b + ((c / 3) * 5) - 1;
    D = pow((a * b * c), 3) / 2;
    
    printf("Resultados: \n"
            "a) %.2f \n"
            "b) %.2f \n"
            "c) %.2f \n"
            "d) %.2f \n", A, B, C, D);
    
    return 0;
}