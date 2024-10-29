// Faça um programa que calcule e mostre a área de um triângulo retangulo, onde at = (b x h) /2 .

#include <stdio.h>

int main(void)
{
    int area, base, altura;

    printf("\nDigite a base do triangulo retangulo : ");
    scanf("%d", &base);
    getchar();

    printf("\nDigite a altura do triangulo retangulo : ");
    scanf("%d", &altura);
    getchar();

    area = (base * altura) / 2;

    printf("\nA area do triangulo retangulo = %d", area);

    return 0;
}