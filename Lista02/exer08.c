#include <stdio.h>

int main(){
    /*
    exer 8
    Faça um programa que receba dois números “x” e “y” e execute as operações especificadas
    na Tabela 3, de acordo com a opção escolhida pelo usuário. Caso a opção escolhida seja
    inválida, o programa deve mostrar uma mensagem de erro e finalizar sua execução. Lembre-
    -se de que na divisão “y” deve ser diferente de zero.
    Código          Operações                        
    1               Média aritmétca entrex e y                    
    2               Diferença do maior pelo menor número      
    3               Produto entre x e y          
    4               Divisão entre x e y
    */

    float x, y, operacao;
    int cod;

    printf("Codigo          Operacoes                        \n"
            "1               Media aritmetca entre x e y              \n"            
            "2               Diferenca do maior pelo menor numero    \n"  
            "3               Produto entre x e y                     \n"
            "4               Divisao entre x e y \n");                  

    printf("Digite o codigo: \n");
    scanf("%i", &cod); 
    
    printf("Digite os valores de x e y, respectivamente: \n");
    scanf("%f%f", &x, &y);

    switch (cod) {
    case 1:
        operacao = (x + y) / 2;
        break;
    
    case 2:
        if(x > y){
        operacao = x - y;
        }
        else if(y > x){
            operacao = y - x;
        }
        else{
            printf("Os numeros sao iguais!");
        }
        break;

    case 3:
        operacao = x * y;
        break;

    case 4:
        if(y == 0){
            printf("Erro! \nO divisor nao pode ser igual a zero! \n");
        }
        else{
            operacao = x / y;
        }
        break;

    default:
        printf("Codigo invalido!");
        return 1;
    }

    printf("Resultado: %.2f", operacao);
    
    return 0;
}