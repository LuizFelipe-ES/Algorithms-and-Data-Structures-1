// Faça um programa que calcule e mostre a velocidade de deslocamento de um móvel, onde  v = d/t .

#include <stdio.h>

int main(void)
{
    int distancia, tempo, velocidade;

    printf("\nDigite a distancia do veiculo : ");
    scanf("%d", &distancia);
    getchar();

    printf("\nDigite o tempo de deslocação do veiculo : ");
    scanf("%d", &tempo);
    getchar();

    velocidade = distancia / tempo;

    printf("\nA velocidade de deslocamento do veiculo = %d", velocidade);

    return 0;
}