// Faça um programa que permita calcular qualquer uma das áreas escolhidas abaixo:
//- área do quadrado;
//- área do retângulo;
//- área do cubo;
//- área do triangulo retângulo;

#include <stdio.h>

int main(void)
{
    int opcao, lado, quadrado, base, altura, retangulo, medida, cubo, triangulor;

    printf("\n 1 - Area do quadrado \n 2 - Area do retangulo \n 3 - Area do cubo \n 4 - Area do triangulo retangulo \n\nEscolha uma opcao : ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1)
    {
        printf("\nDigite o lado do quadrado : ");
        scanf("%d", &lado);
        getchar();

        quadrado = lado * lado;

        printf("\nA area do quadrado = %d ", quadrado);
    }

    else if (opcao == 2)
    {
        printf("\nDigite a base do retangulo : ");
        scanf("%d", &base);
        getchar();

        printf("\nDigite a altura do retangulo : ");
        scanf("%d", &altura);
        getchar();

        retangulo = base * altura;

        printf("\nA area do retangulo = %d", retangulo);
    }

    else if (opcao == 3)
    {
        printf("\nDigite a medida do lado do cubo : ");
        scanf("%d", &medida);
        getchar();

        cubo = 6 * (medida * medida);

        printf("\nA area total do cubo = %d ", cubo);
    }

    else if (opcao == 4)
    {
        printf("\nDigite a base do triangulo retangulo : ");
        scanf("%d", &base);
        getchar();

        printf("\nDigite a altura do triangulo retangulo : ");
        scanf("%d", &altura);
        getchar();

        triangulor = (base * altura) / 2;

        printf("\nA area do triangulo retangulo = %d", triangulor);
    }

    else
    {
        printf("\nERRO. Opcao invalida");
    }

    return 0;
}