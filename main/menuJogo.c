/*Exercício 7: 
Em um projeto para um jogo, é necessário cria um menu, crie um programa que exiba um menu com opções
 (1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações). Solicite ao usuário que escolha uma opção e,
 utilizando o switch case, execute a funcionalidade correspondente à opção escolhida.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
 {
    int menu =0;
    char aviso[250];

    printf("Digite a opcao desejada novo jogo(1),Carrgar jogo(2) e configuracoes(3)");
    scanf("%i",&menu);
    system("cls || clear");

switch (menu)
{
case 1:
     strcpy(aviso,"Novo jogo");
    break;
case 2:
    strcpy(aviso,"Carregar jogo");
    break;
case 3:
    strcpy(aviso,"configurar jogo");
    break;

default:
     strcpy(aviso,"Erro!");
    break;
}

    printf("%s",aviso);
    return 0;
 }
    