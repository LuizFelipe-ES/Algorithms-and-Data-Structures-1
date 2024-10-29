/*Faça um programa para somar e mostrar o resultado da soma abaixo:
 S = (2 + 4 +6 + 8 +..................) a soma dos 15 primeiros;*/

#include <stdio.h>

int main(void)
{
    int s = 2, limite = 0, soma = 0;

    while (limite < 15)
    {
        soma = soma + s;
        s = s + 2;
        limite++;
    }
    printf("\nA soma dos primeiros numeros pares = %d", soma);

    return 0;
}