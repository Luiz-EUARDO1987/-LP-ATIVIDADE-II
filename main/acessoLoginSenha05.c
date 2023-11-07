/*Exercício 10: 
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -).
 Utilize o switch case para realizar a operação desejada e exibir o resultado.*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #define senhaSistema "senai123456"
 #define loginSistema "senai123456"

int main()
{
    char senha[250];
    char login[250];
    char aviso[250];
    int retorno01= 0,retorno02 =0, confirmacao=1;
    do
    {
        printf("Digite o seu login\n");
        fgets(login,250,stdin);
        //getchar();
        system("cls || clear");

       
        printf("Digite a senha\n");
        fgets(senha,250,stdin);
       // getchar();
        system("cls || clear");
       
        retorno01 = strcmp(senhaSistema,senha);
        retorno02 = strcmp(loginSistema,login);
        if (retorno01 < 0 && retorno02 < 0)
        {
            strcpy(aviso,"acesso permitido");
            confirmacao--;
        }
        else
        {
            printf("login ou senha incorreta.");
        }
        
    } while (confirmacao != 0);
    
    printf("%s",aviso);
    return 0;
}