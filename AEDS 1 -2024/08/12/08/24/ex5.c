// Faça um programa que calcule e mostre a área de um cubo.

#include <stdio.h>

int main(void)
{
    int lado, cubo;

    printf("\nDigite a medida do lado do cubo : ");
    scanf("%d", &lado);
    getchar();

    cubo = 6 * (lado * lado);

    printf("\nA area do cubo = %d", cubo);

    return 0;
}