/*Utilizando a estrutura de repetição DO-WHILE, implemente um programa em C que calcule e escreva a seguinte soma:
soma = (1/1 + 1/2 + 1/3 + 1/4 + ... + 1/40)*/

#include <stdio.h>
int main(void)
{
    double x = 1, y = 1, somaDivisoes = 0, divisao;

    while (y <= 40)
    {
        divisao = x / y;
        somaDivisoes = divisao + somaDivisoes;
        y++;
    }

    printf("\nA soma das divisoes = %.3lf", somaDivisoes);

    return 0;
}