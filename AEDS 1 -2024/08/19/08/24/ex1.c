// Faça um programa para ler 2 números diferentes quaisquer e após mostre o valor do maior e o valor do menor entre os dois.

#include <stdio.h>

int main(void)
{

    int x, y;

    printf("\n Digite um número inteiro :");

    scanf("%d", &x);

    getchar();

    printf("\n Digite um número inteiro : ");

    scanf("%d", &y);

    getchar();

    if (x != y)

    {

        if (x > y)

        {
            printf(" \nO primeiro valor informado %d e maior que o segundo valor informado %d", x, y);
        }

        else if (y > x)

        {

            printf("\n O segundo valor informado %d e maior que o primeiro valor informado %d", y, x);
        }
    }

    else

    {

        printf("\nErro.Valores nao sao diferentes");
    }

    return 0;
}