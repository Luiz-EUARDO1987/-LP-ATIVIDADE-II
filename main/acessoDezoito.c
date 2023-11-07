/*Exercício 4: 
Em um projeto de controle de acesso, crie um programa que solicite ao usuário sua idade e
 verifique se ele tem permissão para acessar um determinado recurso. Se a idade for maior ou igual a 18,
  exiba a mensagem "Acesso permitido".
 Caso contrário, exiba a mensagem "Acesso negado".*/

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int ano = 0;
    char aviso[250];
    printf("Digite o nao em que voce nascel com quatro digitos.\n");
    scanf("%i",&ano);
    system("cls || clear");
    if (2023-ano>18)
    {
        strcpy(aviso,"Acesso Permitido");
    }
    else
    {
        strcpy(aviso,"Acesso Negado");
    }
    printf("%s",aviso);
    return 0;
 }