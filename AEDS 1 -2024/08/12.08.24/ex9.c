// Faça um programa que calcule e mostre o tempo de deslocamento de um móvel, onde t = d/v .

#include <stdio.h>

int main(void)
{
    int distancia, tempo, velocidade;

    printf("\nDigite distancia percorrida do veiculo : ");
    scanf("%d", &distancia);
    getchar();

    printf("\nDigite a velocidade do veiculo : ");
    scanf("%d", &velocidade);
    getchar();

    tempo = distancia / velocidade;

    printf("\nO tempo de deslocamento do veiculo = %d", tempo);

    return 0;
}