// Faça um programa que leia três números inteiros quaisquer, execute a soma e mostre o resultado ao final.
#include <stdio.h>

int main(void)
{
    int x, y, z, soma;

    printf("\nDigite um inteiro : ");
    scanf("%d", &x);
    getchar();

    printf("\nDigite um inteiro : ");
    scanf("%d", &y);
    getchar();

    printf("\nDigite um inteiro : ");
    scanf("%d", &z);
    getchar();

    soma = x + y + z;

    printf("\nA soma dos 3 numeros = %d", soma);

    return 0;
}