/*Exercício 15: 
Implemente um programa que converta valores entre diferentes unidades de medida, como por exemplo, 
quilômetros para milhas e Celsius para Fahrenheit. O programa deve permitir ao usuário escolher a conversão desejada e repetir 
o processo para vários valores.
 Utilize o switch case  e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa.*/
#include  <stdio.h>
#include  <stdlib.h>
#include  <ctype.h>
#include  <string.h>
#include  <time.h>
//formula (0 °C × 9/5) + 32 = 32 °F

int main()
{
  float valorC02 =0;
  float valorF02 = 0;
  float quilometros =0;
  float milhas01 =0;
  float valorRecebido=0;
  char menu ;
  char saida ;

  do
  {
    printf("Digite (s)para sair e (c)continuar\n");
    scanf("%c", &saida);
    getchar();
    system("cls || clear");
    saida = toupper(saida);

     switch (saida)
     {
     case 'C':

    printf("Digite a conversao desejada.\n");
    printf("opcoes\n");
    printf("(F)graus celsius para fahrenheit\n");
    printf("(C)fahrenheit pa graus celsius\n");
    printf("(M)quilometro para milha\n");
    printf("(K)milha para quilometro.\n");
    scanf("%c", &menu);
    getchar();
    system("cls || clear");
    menu = toupper(menu);

    printf("Digite o valor que sera convertido.\n");
    scanf("%f", &valorRecebido);
    getchar();
    system("cls || clear");

    switch (menu)
    {
    case 'F':

      valorF02 = (valorRecebido*9/5)+32;
      printf("fahrenheit: %.02f\n",valorF02);
      sleep(5);

      break;
    
    case 'C':
      valorC02 = (valorRecebido-(float)32)*(float)5/(float)9;
      printf("Cº: %.02f\n",valorC02);
      sleep(5);
      break;
  
    case 'M':
     milhas01 = valorRecebido*(float)1.60934;
    printf("milhas: %.02f\n",milhas01);
    sleep(5);
      break;
   
    case 'K':
      quilometros = valorRecebido/(float)1.60934;
      printf("Km: %.02f\n",quilometros);
      sleep(5);
      break;
   
    default:
      printf("opcao invalida");
      sleep(5);
      break;
    }//fimswitchCase
      break;
     
     default:
      break;
     }//fim switchCaseSaida
      
      system("cls || clear");
     
  } while (saida != 'S');//fim do-while
   
  return 0;
}