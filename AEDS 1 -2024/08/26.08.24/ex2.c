/*Utilizando a estrutura de repetição WHILE, implemente um programa em C para ler o peso e o gênero (masculino=1 / feminino=2) de um grupo de 5 pessoas e ao término mostre:
- o número de homens e o número de mulheres do grupo;
- a média dos pesos do grupo;
- indicar o gênero que teve a maior ocorrência (homens ou mulheres); */

#include <stdio.h>
int main(void)
{
    int genero, homens = 0, mulheres = 0, grupo = 0;
    double peso, mediaPesos = 0;

    while (grupo < 5)
    {
        printf("\n 1 - Masculino \n 2 - Feminino \nQual o seu genero : ");
        scanf("%d", &genero);
        getchar();

        if (genero == 1)
        {
            printf("\nDigite o seu peso : ");
            scanf("%lf", &peso);
            getchar();
            grupo++;
            homens++;
        }

        if (genero == 2)
        {
            printf("\nDigite o seu peso : ");
            scanf("%lf", &peso);
            getchar();
            grupo++;
            mulheres++;
        }

        else
        {
            printf("\nERRO. Opcao invalida");
        }

        mediaPesos = peso + mediaPesos;
    }

    mediaPesos = mediaPesos / 5.0;

    if (homens > mulheres)
    {
        printf("\nHouve a presença maior de homens no grupo %d e %d mulheres, A media dos pesos = %2.lf", homens, mulheres, mediaPesos);
    }
    else if (mulheres > homens)
    {
        printf("\nHouve a presença maior de mulheres no grupo %d e %d homens, A media dos pesos = %2.lf", mulheres, homens, mediaPesos);
    }

    return 0;
}