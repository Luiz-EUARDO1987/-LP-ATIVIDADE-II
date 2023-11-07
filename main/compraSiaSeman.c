/*Exercício 2: 
Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos.
 O sistema oferece um desconto de 10% para compras acima de R$ 100,00
  se a compra for feita em um dia de semana. Se a compra for feita em um fim de semana,
 o desconto será de 15% sobre o valor da compra acima de R$ 100,00.*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main()

 {
    int diaSemana= 0;
    float compras =0;
    float desconto =0;
    char aviso[250];

    printf("digite o dia da semana, sendo que domimgo (1) e sabado(7)\n");
    scanf("%i",&diaSemana);
    system("cls || clear");  
    
    printf("digite o valor das compras\n");
    scanf("%f",&compras);
    system("cls || clear"); 

    if(diaSemana>=2 && diaSemana<=5)
    {
        if(compras > 100)
        {
            desconto =(compras*10) /100;
            strcpy(aviso,"compras feitas nos dias uteis tem dez porcento de desconto acima de cem reais.\n");
        }
    } 
    else if (diaSemana ==1 || diaSemana == 7)
    {
        if(compras>100)
        {
        desconto = (compras*15)/100;
        strcpy(aviso,"compras deitas nos finais de semana tem quinze porecnto de desconto acima de  cem reias\n");
        }

    }
    else
    {
        printf("erro!");
    }
    
    printf("desconto: %.2f\nvalor comprado: %.2f\n%s",desconto,compras,aviso);

 }