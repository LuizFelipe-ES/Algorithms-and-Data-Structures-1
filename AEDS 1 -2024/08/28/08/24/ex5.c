/*Faça um programa para ler os votos(sim = 1 / não = 2) e o gênero(mas = 1 / fem = 2) de um grupo de 7 pessoas.
Ao final mostre :

A ocorrência de sim e de não nas respostas;
O número de mulheres e o número de homens;
O número de mulheres que responderam sim;
O número de homens que responderam não; */

#include <stdio.h>

    int
    main(void)
{
    int mas = 0, fem = 0, genero, voto, sim = 0, nao = 0, femSim = 0, masNao = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("\n1 - feminino  2 - Masculino \nQual o seu genero : ");
        scanf("%d", &genero);
        getchar();

        if (genero == 1)
        {
            fem++;

            printf("\n1 - Sim  2 - Nao \nQual seu voto :  ");
            scanf("%d", &voto);
            getchar();

            if (voto == 1)
            {
                sim++;
                femSim++;
            }

            else if (voto == 2)
            {
                nao++;
            }

            else
            {
                printf("\nERRO. Opcao invalida");
            }
        }

        else if (genero == 2)
        {
            mas++;

            printf("\n1 - Sim  2 - Nao \nQual seu voto :  ");
            scanf("%d", &voto);
            getchar();

            if (voto == 1)
            {
                sim++;
            }

            else if (voto == 2)
            {
                nao++;
                masNao++;
            }

            else
            {
                printf("\nERRO. Opcao invalida");
            }
        }
        else
        {
            printf("\nERRO. Opcao invalida");
        }
    }

    printf("\n %d votos SIM  %d votos NAO", sim, nao);
    printf("\n %d mulheres votantes  %d homens votantes", fem, mas);
    printf("\n %d mulheres respondera SIM \n %d homens responderam NAO", femSim, masNao);

    return 0;
}