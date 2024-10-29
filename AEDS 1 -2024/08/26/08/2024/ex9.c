/*Faça um programa para calcular e mostrar a soma da série abaixo:
S = (1 + 3 +5 + 7 +.................. + 49)*/

#include <stdio.h>
int main(void)
{
    int s = 1, soma = 0;

    while (s < 50)
    {
        soma = s + soma;
        s++;
    }
    printf("\nSoma = %d", soma);
    return 0;
}