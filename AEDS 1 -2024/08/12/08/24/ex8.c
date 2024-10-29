// Faça um programa que calcule e mostre a distancia percorrida por um móvel, onde d = v x t .

#include <stdio.h>

int main(void)
{
    int distancia, tempo, velocidade;

    printf("\nDigite a velocidade do veiculo : ");
    scanf("%d", &velocidade);
    getchar();

    printf("\nDigite o tempo de deslocação do veiculo : ");
    scanf("%d", &tempo);
    getchar();

    distancia = velocidade * tempo;

    printf("\nA distancia percorrida do veiculo = %d", distancia);

    return 0;
}