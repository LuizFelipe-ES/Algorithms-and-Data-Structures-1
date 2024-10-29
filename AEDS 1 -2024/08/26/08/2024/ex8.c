/*Faça um programa para calcular e mostrar a soma da série abaixo:
S = (1 +  1/2 + 1/3 +  1/4 + .............1/10)*/

#include <stdio.h>
int main(void)
{
    double x = 1, y = 1, somaDivisoes = 0, divisao;

    while (y < 11)
    {
        divisao = x / y;
        somaDivisoes = somaDivisoes + divisao;
        y++;
    }
    printf("\nA soma das divisoes = %.2lf", somaDivisoes);

    return 0;
}