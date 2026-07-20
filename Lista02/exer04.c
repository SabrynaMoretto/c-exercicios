#include <stdio.h>
#include <math.h>

int main(){
    /*
    exer 4
    Faça um programa para calcular as raízes da equação de segundo grau. O programa recebe
    como entrada os números a, b, c, que correspondem aos coeficientes da equação de segundo
    grau (ax2 + bx + c = 0). Em seguida, o programa deve mostrar as raízes da equação.
    Caso as raízes não existam, uma mensagem deve ser exibida (por exemplo, “Não existem
    raízes reais”). Caso a equação não seja de segundo grau, uma mensagem também deve ser
    exibida (por exemplo, “Não é uma equação de segundo grau”).
    */

    float a, b, c, delta;

    printf("Digite os valores de a, b e c, respectivamnte: \n");
    scanf("%f%f%f", &a, &b, &c);
    
    delta = (b * b) - (4 * a * c);

    if(a == 0){
        printf("Nao eh uma equacao de segundo grau!");
    }

    else if(delta < 0){
        printf("Nao possui raizes reais!");
    }

    else if(delta == 0){
        float raiz = -b / (2 * a);
        printf("Possui apenas uma raiz. Resultado: %.2f", raiz);
    }
    
    else{
        float raizUm, raizDois;
        raizUm = (-b + sqrt(delta)) / (2 * a);
        raizDois = (-b - sqrt(delta)) / (2 * a);
        printf("Resultados: \n"
                "Primeira raiz: %.2f \n"
                "Segunda raiz: %.2f \n", raizUm, raizDois);
    }

    return 0;
}