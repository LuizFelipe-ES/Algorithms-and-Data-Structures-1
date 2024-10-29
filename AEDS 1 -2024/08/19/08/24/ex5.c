// Faça um programa que funcione como uma calculadora entre dois números quaisquer, que permita escolher calcular a soma, subtração, divisão ou multiplicação entre eles.

#include <stdio.h>
int main(void)
{
    int opcao, x, y, soma, subtracao, divisao, multiplicacao;

    printf("\n 1 - Soma \n 2 - Subtracao \n 3 - Divisao \n 4 - Multiplicacao \n\nEscolha uma opcao : ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("\nDigite um numero : ");
        scanf("%d", &x);
        getchar();

        printf("\nDigite um numero : ");
        scanf("%d", &y);
        getchar();

        soma = x + y;

        printf("\nA soma dos numeros = %d", soma);
    }

    else if (opcao == 2)
    {
        printf("\nDigite um numero : ");
        scanf("%d", &x);
        getchar();

        printf("\nDigite um numero : ");
        scanf("%d", &y);
        getchar();

        subtracao = x - y;

        printf("\nA subtracao dos numeros = %d", subtracao);
    }

    else if (opcao == 3)
    {
        printf("\nDigite um numero : ");
        scanf("%d", &x);
        getchar();

        printf("\nDigite um numero : ");
        scanf("%d", &y);
        getchar();

        divisao = x / y;

        printf("\nA divisao dos numeros = %d", divisao);
    }

    else if (opcao == 4)
    {
        printf("\nDigite um numero : ");
        scanf("%d", &x);
        getchar();

        printf("\nDigite um numero : ");
        scanf("%d", &y);
        getchar();

        multiplicacao = x * y;

        printf("\nA multplicacao dos numeros = %d", multiplicacao);
    }

    return 0;
}