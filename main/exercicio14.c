/*Exercício 14: 
Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares. Além disto, 
deve ser exibido a média aritmética de números pares e impares. Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

 Deve-se interromper a leitura dos dados quando for digitado um valor negativo.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL,"portuguese");
    int pares = 0;
    float media = 0;
    int impares = 0;
    float mediaPares = 0;
    int contador = 0;
    int numero = 0;
    float mediaImpar =0;
    do 
    {
        printf("Digite o numero: %i\n",contador+1);
        scanf("%i",&numero);
        system("cls || clear");
        fflush(stdin);

        if(numero >0)
        {

            if(numero % 2 == 0)
            {
                mediaPares += numero;
                pares++;
            contador++;
            media += numero;
            }
            else
            {
                impares++;
                mediaImpar += numero;
            contador++;
            media += numero;
            }
        }

    }while(numero > 0);
    media /= (float)contador;
    mediaPares /=(float) pares;
    mediaImpar /= (float)impares;
    printf("quantidade de numeros imparas: %i\n",impares);
    printf("media: %.2f\n",media);
    printf("media numeros pares: %.02f\n",mediaPares);
    printf("quantidade de numeros pares: %i\n",pares);
    printf("media impares: %.02f\n",mediaImpar);
    
    return 0;
}