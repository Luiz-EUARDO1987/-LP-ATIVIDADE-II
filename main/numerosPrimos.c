#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero = 0,primo = 0, i=0;//declaração de variaveis
    float divisao =0;

    printf("Digite um numero para ver se é primo\n");//saida de dados

    scanf("%i",&numero);//entrada de dados

    system("cls || clear");//limpar a tela
    //i recebera numero e sera declementado em um para testar todas as possibilidades, numero sera dividido por i até chegar a um
   
    
        i = numero;//i recebe numero
   do
   {


        if (numero%i==0)//se divisao resto zero primo mais um
        {
            primo++;
        }//fim do se
        divisao = numero/i;//divisao recebe resultado
        i--;
        
   } while (i!=0);//fim do do-while
   
   
    
    if (primo ==2)
    {
       printf("O numero: %i e primo.\n",primo);

    }//fim do se primo
    else
    {
       printf("O numero: %i nao e primo.\n",primo);

    }//fim se
    return 0;
    
}//fim do corpo primcipal