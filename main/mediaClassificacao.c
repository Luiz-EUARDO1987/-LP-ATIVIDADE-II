/*Exercício 3: 
Em um projeto de classificação de alunos, desenvolva um programa que receba a nota de um aluno e determine
 sua classificação com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razoável"
   - Nota menor que 5: "Insuficiente"*/
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>

   int main()
   {
    float media = 0,nota = 0;
    int contador =1;
    char aviso[250];
    do
    {
        printf("Digite a nota %i\n",contador);
        scanf("%f",&nota);
        system("cls || clear");
        if (nota >=0 || nota <+10)
        {
            contador++;
            media += nota;
        }
        
    } while (contador <= 4);
    
    media /=(float)contador-1;
    
    if (media >= 9)
    {
       strcpy(aviso,"media maior ou igual a nove Excelente!");
    }
    else if (media >=7)
    {
        strcpy(aviso,"media maior que sete Bom!");
    }
    else if (media >= 5)
    {
        strcpy(aviso,"media maior que cinco Razoavel!");
    }
    else
    {
        strcpy(aviso,"media menor que cinco Deprecao!");
    }
    
    printf("%s\n media: %.2f",aviso,media);
    return 0;
   }