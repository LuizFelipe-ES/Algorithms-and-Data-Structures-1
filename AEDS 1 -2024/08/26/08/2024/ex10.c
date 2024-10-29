/*Faça um programa que leia os 5 resultados do lançamento sucessivos de uma moeda, onde temos para cada resultado (Cara=1 / Coroa=2).
Ao final da leitura dos resultados dos lançamentos, mostre a ocorrência do número de Caras e o número de Coroas e informe qual dos
dois resultados foi o que teve o maior número de ocorrências.
Exemplo:
Resultado:  Cara=3    Coroa=2
Maior ocorrência: Cara*/

#include <stdio.h>
int main(void)
{
    int cara = 0, coroa = 0, jogadas = 0, leitura;

    while (jogadas < 5)
    {
        printf("\n1 - Cara   2 - Coroa \n\nJogada:");
        scanf("%d", &leitura);

        if (leitura == 1)
        {
            cara++;
        }

        else if (leitura == 2)
        {
            coroa++;
        }

        jogadas++;
    }

    printf("\nResultado: \nCara = %d Coroa = %d", cara, coroa);

    return 0;
}