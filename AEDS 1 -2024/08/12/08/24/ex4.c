// Faça um programa que calcule e mostre a área de uma piscina retangular.

#include <stdio.h>

int main(void)
{
    int area, base, altura;

    printf("\nDigite a base da piscina : ");
    scanf("%d", &base);
    getchar();

    printf("\nDigite a altura da piscina : ");
    scanf("%d", &altura);
    getchar();

    area = base * altura;

    printf("\nA area da piscina retangular = %d", area);

    return 0;
}