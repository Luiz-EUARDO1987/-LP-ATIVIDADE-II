/*Exercício 8:
Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva 
a partir desse número até zero.
 Utilize o switch case para exibir mensagens personalizadas para cada número da contagem regressiva. */
 #include <stdio.h>
 #include <stdlib.h>
  int main()
  {
    int numero =0;
    int positivo =0;
    while(positivo < 1)
    {
    printf("digite um numero\n");
    scanf("%i",&numero);
    system("cls || clear");
    if (numero > 0 )
    {
        
    do
    {
        numero--;
        switch (numero)
        {
        case 10:
            printf("dez\n");
            break;
        
        case 9:
            printf("nove\n");
            break;
        
        case 8:
            printf("oito\n");
            break;
        
        case 7:
            printf("sete\n");
            break;
        
        case 6:
            printf("seis\n");
            break;
        
        case 5:
            printf("cinco\n");
            break;
        
        case 4:
            printf("quatro\n");
            break;
        
        case 3:
            printf("tres\n");
            break;
        
        case 2:
            printf("dois\n");
            break;
        
        case 1:
            printf("um\n");
            break;
        
        default:
        printf("%i\n",numero);
            break;
        }
    } while (numero >= 0);
    }
    }
    
    return 0;
  }