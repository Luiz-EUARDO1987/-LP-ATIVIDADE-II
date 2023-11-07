/*Exercício 10: 
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). 
Utilize o switch case para realizar a operação desejada e exibir o resultado.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero01 = 0,numero02 =0,operacao =0,resultado;
    printf("digite o primeiro numnero.\n");
    scanf("%i",&numero01);
    system("cls || clear");

    printf("digite o segundo numero.\n");
    scanf("%i",&numero02);
    system("cls || clear");
    
    printf("digite (1)soma, (2)subtracao, (3)divisao ou (4)multiplicacao.\n");
    scanf("%i",&numero02);
    system("cls || clear");
    switch (operacao)
    {
    case 1:
        resultado = numero01 + numero02;
        break;
    case 2:
        resultado = numero01 - numero02;
        break;
    case 3:
        resultado = numero01 / numero02;
        break;
    case 4:
        resultado = numero01 * numero02;
        break;
    
    default:
        printf("erro!");
        break;
    }
    printf("resultado: %i",resultado);
    
    return 0;
}