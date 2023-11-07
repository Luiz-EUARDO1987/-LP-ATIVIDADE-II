/*Exercício 13: 
Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero01 =0,numero02 =0;
    printf("Digite o primeiro numero\n");
    scanf("%i", &numero01);
    system("cls || clear");
   
    printf("Digite o segundo numero\n");
    scanf("%i", &numero02);
    system("cls || clear");
    
    if (numero01 > numero02)
    {
       printf("Primeiro numero maior que o segundo");
    }
    else
    {
        printf("O segundo numero é maior que o primeiro");
    }
    
    return 0;
}