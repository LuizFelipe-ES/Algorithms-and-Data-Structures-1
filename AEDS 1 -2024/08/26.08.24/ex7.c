/*Faça um programa para calcular e mostrar a soma da série abaixo:
S = (1 + 2 +3 + 4 +.................. + 50)*/

#include <stdio.h>

int main(void)
{
    int acumula = 1, soma = 0;
    ;

    while (acumula <= 50)
    {
        soma = acumula + soma;
        acumula++;
    }

    printf("\nA soma dos numeros = %d", soma);

    return 0;
}