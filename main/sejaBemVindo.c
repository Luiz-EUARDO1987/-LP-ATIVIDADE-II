/*Exercício 5: 
Enquanto você faz parte de uma equipe de desenvolvimento de software, 
desenvolva um programa que solicite ao usuário que escolha um idioma de preferência (1 - Inglês, 2 - Espanhol,
 3 - Francês). Com base na escolha do usuário, 
exiba a mensagem de boas-vindas no idioma selecionado.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
 {
    int idioma =0;
    char aviso[250];

    printf("Digite o idioma desejado Ingles(1), espanhol(2) e Frances (3)");
    scanf("%i",&idioma);
    system("cls || clear");

    if (idioma == 1)
    {
        strcpy(aviso,"welcome");
    }
    else if (idioma == 2)
    {
        strcpy(aviso,"bienvenido");
    }
    else if (idioma == 3)
    {
       strcpy(aviso,"bienvenu");
    }
    else
    {
        strpcy(aviso,"escolha invalida");
    }
    printf("%s",aviso);
    return 0;
 }
    