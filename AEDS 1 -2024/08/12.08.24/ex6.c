// Faça um programa que leia as idades de 3 pessoas e ao término mostre a média das idades lidas.

#include <stdio.h>

int main(void)
{
    int idade1, idade2, idade3, media;

    printf("\nDigite a primeira idade : ");
    scanf("%d", &idade1);
    getchar();

    printf("\nDigite a segunda idade : ");
    scanf("%d", &idade2);
    getchar();

    printf("\nDigite a terceira idade : ");
    scanf("%d", &idade3);
    getchar();

    media = (idade1 + idade2 + idade3) / 3;

    printf("\nA media das 3 idades = %d", media);

    return 0;
}