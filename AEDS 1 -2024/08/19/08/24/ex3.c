// Faça um programa que calcule a idade em anos de qualquer pessoa e após ter calculado mostre a idade e uma das mensagens abaixo:
//- se idade  <= 10 anos, diga “Criança”;
//- se idade  > 10 e <= 17 anos, diga “Adolescente”;
//- se idade  >= 18 anos, diga “Adulto”;

#include <stdio.h>

int main(void)
{
    int anonascimento, anoatual = 2024, idade;

    printf("\nDigite o seu ano de nascimento : ");
    scanf("%d", &anonascimento);
    getchar();

    idade = anoatual - anonascimento;

    if (idade <= 10)
    {
        printf("Voce e Crianca");
    }

    else if (idade > 10 && idade <= 17)
    {
        printf(" Voce e Adolescente");
    }

    else if (idade >= 18)
    {
        printf("Voce e Adulto");
    }

    return 0;
}