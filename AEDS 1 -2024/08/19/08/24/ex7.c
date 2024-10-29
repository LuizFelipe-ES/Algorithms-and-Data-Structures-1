// Faça um programa que permita o cálculo de qualquer uma das grandezas físicas abaixo:
//-distancia, onde d = v * t ;
//- tempo, onde t = d / v ;
//- velocidade, onde v = d / t ;

#include <stdio.h>

int main(void)
{
    int opcao;
    double d, t, v, distancia, tempo, velocidade;

    printf("\n 1 - Distancia \n 2 - Tempo \n 3 - Velocidade \n\n Escolha uma opcao : ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1)
    {
        printf("\nDigite a velocidade : ");
        scanf("%lf", &v);
        getchar();

        printf("\nDigite o tempo : ");
        scanf("%lf", &t);
        getchar();

        distancia = v * t;

        printf("\nA distancia = %lf", distancia);
    }

    else if (opcao == 2)
    {
        printf("\nDigite a distancia : ");
        scanf("%lf", &d);
        getchar();

        printf("\nDigite a velocidade : ");
        scanf("%lf", &v);
        getchar();

        tempo = d / v;

        printf("\nO tempo = %lf", tempo);
    }

    else if (opcao == 3)
    {
        printf("\nDigite a distancia : ");
        scanf("%lf", &d);
        getchar();

        printf("\nDigite o tempo : ");
        scanf("%lf", &t);
        getchar();

        velocidade = d / t;

        printf("\nA velocidade = %lf", velocidade);
    }

    else
    {
        printf("\nERRO. Opcao invalida");
    }

    return 0;
}