/*Faça um algoritmo que leia o ano de nascimento de uma pessoa e calcule sua idade,
considerando o ano atual. Para verificar se já fez aniversário no ano atual pergunte se a pessoa já fez aniversário,
sendo que ela pode entrar com a informação (sim=1) ou  (não=2). Com isto é possível se ter maior precisão sobre a idade. V
erifique também se a pessoa já tem idade para conseguir Carteira de Habilitação (18 anos ou mais) e imprima a mensagem referente a esta checagem.
Mostre a idade da pessoa.*/

#include <stdio.h>

int main(void)
{
    int anoatual = 2024, anonascimento, idade, aniversario;

    printf("\nDigite o seu ano de nascimento : ");
    scanf("%d", &anonascimento);
    getchar();

    printf("\nVoce ja fez aniversario no ano atual ? \n 1 - SIM \n 2 - NAO \n");
    scanf("%d", &aniversario);
    getchar();

    idade = anoatual - anonascimento;

    if (aniversario == 1)
    {
        if (idade >= 18)
        {
            printf("\nVoce tem %d anos de idade e ja tem idade o suficiente para tirar carteira de habilitacao.", idade);
        }
        else
        {
            printf("\nVoce tem %d anos de idade e nao tem idade o suficiente para tirar carteira de habilitacao.", idade);
        }
    }

    else if (aniversario == 2)
    {
        idade = idade - 1;

        if (idade >= 18)
        {
            printf("\nVoce tem %d anos de idade e ja tem idade o suficiente para tirar carteira de habilitacao.", idade);
        }
        else
        {
            printf("\nVoce tem %d anos de idade e nao tem idade o suficiente para tirar carteira de habilitacao.", idade);
        }
    }

    else
    {
        printf("\nERRO, Opcao Invalida");
    }

    return 0;
}