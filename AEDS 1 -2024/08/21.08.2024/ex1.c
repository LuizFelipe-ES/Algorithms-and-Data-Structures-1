/*Faça um algoritmo que leia 2 números inteiros e faça sua adição. Se o resultado for maior ou igual a 10, some 5 a este número.
Caso contrário some 7 a ele. Imprima o resultado final.*/

#include <stdio.h>

int main(void)
{
    int x, y, soma;

    printf("\nEntre com um numero inteiro : ");
    scanf("%d", &x);
    getchar();

    printf("\nEntre com um numero inteiro : ");
    scanf("%d", &y);
    getchar();

    soma = x + y;

    if (soma >= 10)
    {
        soma = soma + 5;
    }
    else
    {
        soma = soma + 7;
    }

    printf("\nO resultado da soma = %d", soma);

    return 0;
}