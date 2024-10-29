/*Utilizando a estrutura de repetição WHILE, implemente um programa em C que calcule e escreva a seguinte soma:
soma = (1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50)*/

#include <stdio.h>
int main(void)
{
    double x = 1, y = 1, somaDivisoes = 0, divisao;

    while (x <= 99 && y <= 50)
    {
        printf("\n x : %.2lf y : %.2lf", x, y);
        divisao = x / y;
        somaDivisoes = divisao + somaDivisoes;
        x = x + 2;
        y++;
    }

    printf("\nA soma das divisoes = %.2lf", somaDivisoes);

    return 0;
}