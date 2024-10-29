/*Faça um programa que calcule o Fatorial de um número inteiro e positivo,
onde  n ! = n  x  (n-1) x (n-2) x ...... x 2 x 1
Exemplo:  4! = 4 x 3 x 2 x 1             4! = 24 */

#include <stdio.h>
int main(void)
{
    int fatorial, n = 1, num;
    printf("\nDigite o numero para ser exibido o seu fatorial :  ");
    scanf("%d", &fatorial);
    num = fatorial;
    getchar();

    while (fatorial >= 1)
    {
        n = n * fatorial;
        fatorial--;
    }
    printf("\n!%d = %d", num, n);

    return 0;
}