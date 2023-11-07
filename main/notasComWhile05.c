/*Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota.
 O programa deve calcular e exibir a média das notas digitadas.
 Utilize o for para repetir o processo de solicitação das notas.*/
 #include <stdio.h>
 #include <stdlib.h>
  int main()
  {
    float notas =0,media =0;
    int contador =1;

    do
    {
        printf("Digite a nota %.0f\n",contador);
        scanf("%f",&notas);
        system("cls || clear");
        if (notas >=0 && notas <= 10)
        {
           media += notas;
        }
        
    } while (contador < 4);
    media /= (float)contador;
    printf("media: %.2f",media);
    
    return 0;
  }