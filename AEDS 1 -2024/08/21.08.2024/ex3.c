/*Faça um algoritmo que segundo uma nota informada pelo usuário, verifique em qual faixa a mesma se encaixa e imprima para o usuário a 
mensagem correspondente conforme a tabela abaixo:  

Faixa das notas             Mensagem

Nota > = 8 e Nota < = 10    Ótimo

Nota > = 7 e Nota < 8       Bom

Nota > = 5 e Nota < 7       Regular

Nota < 5                    Insatisfatório */

#include <stdio.h>

int main ( void )
{
 int nota;

 printf("\nDigite a sua nota : ");
 scanf("%d", &nota);
 getchar();

  if ( nota <= 10 && nota >= 0 )
  {
    if ( nota >= 8 && nota <= 10 )
    {
     printf("\nOtimo aproveitamento", nota);
    }
    else if ( nota >= 7 && nota < 8 )
    {
     printf("\nBom aproveitamento", nota);
    }
    else if ( nota >= 5 && nota < 7 )
    {
     printf("\nRegular aproveitamento", nota);
    }
    else if ( nota < 5 )
    {
     printf("\nInsatisfatorio aproveitamento", nota);
    }
  }
  else
  {
    printf("\nERRO. Nota invalida.");
  }

 return 0;
}