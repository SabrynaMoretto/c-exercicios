#include <stdio.h>

int main(){
    /*
    Faça um programa que receba como entrada um caractere e informe se ele ́e uma vogal ou não.
    */
    
    char caractere;

    printf("Digite uma letra: \n");
    scanf("%c", &caractere);

    if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
            printf("Seu caractere eh uma vogal!");
    }

    else{
        printf("Seu caractere nao eh uma vogal!");
    }
    return 0;
}