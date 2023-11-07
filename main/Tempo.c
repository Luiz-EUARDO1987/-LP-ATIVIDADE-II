/*Exercício 1: 
Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura. 
O jogo tem um sistema de clima que depende da temperatura externa. Se a temperatura for superior a 25 graus Celsius,
o clima será ensolarado. Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso.
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperatura = 0;
    
    printf("Digite a temperatura em graus Celsius.\n");
    scanf("%f", & temperatura);
    system("cls || clear");
    
    if(temperatura > 25)
    {
     printf("clima ensolarado.\n");   
    }
    else if(temperatura < 15 )
     {
        printf("clima chuvoso");
     }
      else
      {
        printf("clima noblado.");
      }

    return 0;
}
