#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Exercício 6: 
Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário o código do produto
 (1 - Camiseta, 2 - Calça, 3 - Sapato).
Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.*/
 int main()
 {
    int produto =0;
    char aviso[250];

    printf("Digite o item desejado (1)va,iseta,(2)calcas e (3)sapatos\n");
    scanf("%i",&produto);
    system("cls || clear");

switch (produto)
{
case 1:
     strcpy(aviso,"camiseta\nvalor R$50");
    break;
case 2:
    strcpy(aviso,"Calca\nvalor R$150");
    break;
case 3:
    strcpy(aviso,"sapatos\nvalor r$500");
    break;

default:
     strcpy(aviso,"Erro!");
    break;
}

    printf("%s",aviso);
    return 0;
 }
    