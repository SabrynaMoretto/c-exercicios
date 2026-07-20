#include <stdio.h>

int main(){
    /*
    exer 7 
    Um escritório de contabilidade deseja realizar o reajuste do salário dos funcionários de todos
    os seus clientes. Neste caso, será utilizado como base o reajuste acordado com os sindicatos
    de cada categoria, conforme especificado na Tabela 2. Faça um programa que receba o
    salário atual, o cargo e calcule o reajuste do salário. O programa deve mostrar o valor do
    reajuste e o salário já atualizado.

    Código          Cargo                           Reajuste
    1               Vendedor(a)                     10%
    2               Auxiliar de escritório          7%
    3               Auxiliar de Enfermagem          12%
    4               Bibliotecário (a)               11%
    */

    float salarioAtual, reajuste, salarioFinal;
    int cod;

    printf("Digite o codigo do cargo: \n");
    scanf("%i", &cod);

    printf("Digite o salario atual: \n");
    scanf("%f", &salarioAtual);

    switch (cod) {
    case 1:
        reajuste = 0.10;
        break;
    
    case 2:
        reajuste = 0.07;
        break;

    case 3:
        reajuste = 0.12;
        break;

    case 4:
        reajuste = 0.11;
        break;
    
    default:
        printf("Codigo invalido");
        return 1;
    }

    salarioFinal = salarioAtual + (salarioAtual * reajuste);
    printf("Salario atualizado! Valor: %.2f", salarioFinal);

    return 0;
}