// Faça um programa que calcule e mostre a idade em anos de uma pessoa.

#include <stdio.h>

int main(void)
{
    int ano = 2024, nascimento, idade;

    printf("\nDigite seu ano de nascimento : ");
    scanf("%d", &nascimento);
    getchar();

    idade = ano - nascimento;

    printf("\nA sua idade = %d", idade);

    return 0;
}