/*Faça um programa para apurar uma eleição onde concorrem (João=1, Maria=2, Nulo=3). Para esta eleição, considere 8 eleitores.

Ao término mostre:
O número de votos do candidato João e os da Maria;
O número de votos nulos;
O candidato vencedor;
A porcentagem de votos nulos no total de votos da eleição; */

#include <stdio.h>

int main(void)
{
    double voto, joao = 0, maria = 0, nulo = 0, vencedor, totalVotos, pcNulo;

    for (int i = 0; i < 8; i++)
    {
        printf("\nJoao = 1  Maria = 2  Nulo = 3 \nQual e seu voto : ");
        scanf("%lf", &voto);
        getchar();

        if (voto == 1)
        {
            joao++;
        }

        else if (voto == 2)
        {
            maria++;
        }

        else if (voto == 3)
        {
            nulo++;
        }

        else
        {
            printf("\nERRO. Opcao invalida");
        }
    }
    totalVotos = joao + maria + nulo;
    pcNulo = (100 * nulo) / totalVotos;

    printf("\n%.0lf votos de Joao || %.0lf votos de Maria", joao, maria);
    printf("\n%0.lf votos nulos", nulo);
    printf("\nTotal de votos  = %0.lf", totalVotos);

    if (joao > maria && joao > nulo)
    {
        printf("\n\nJoao vencedor das eleicoes!");
    }

    else if (maria > joao && maria > nulo)
    {
        printf("\n\nMaria vencedora das eleicoes!");
    }

    else if (nulo > joao && nulo > maria)
    {
        printf("\n\nNao houve vencedor!");
    }

    printf("\n\nHouve %.1lf porcento de abstencao na votacao", pcNulo);

    return 0;
}