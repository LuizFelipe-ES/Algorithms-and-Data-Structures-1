/*Faça um programa para somar e mostrar a soma abaixo:
S = (-7, -5, -3,  .....................) a soma dos 10 primeiros;*/

#include <stdio.h>

int main(void)
{
    int s = -7, limite = 0, soma = 0;

    while (limite < 10)
    {
        soma = soma + s;
        s = s + 2;
        limite++;
    }
    printf("\nA soma dos primeiros numeros pares = %d", soma);

    return 0;
}