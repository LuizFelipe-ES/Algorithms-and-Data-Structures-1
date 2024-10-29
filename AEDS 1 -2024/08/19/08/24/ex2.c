//Faça um programa para ler 3 números diferentes quaisquer e após mostre o valor do maior e o valor do menor entre os três.

#include <stdio.h>

int main(void)

{
    int x, y, z, maior, menor;

    printf("\n Digite um número inteiro :");

    scanf("%d", &x);

    getchar();

    printf("\n Digite um número inteiro : ");

    scanf("%d", &y);

    getchar();

    printf("\n Digite um número inteiro : ");

    scanf("%d", &z);

    getchar();

    if (x != y && x != z && y != z)
    {
        if (x > y && x > z)

        {
            maior = x;

            if (y < z)
            {

                menor = y;
            }

            if (z < y)
            {

                menor = z;
            }
        }

        else if (y > x && y > z)
        {

            maior = y;

            if (x < z)
            {

                menor = x;
            }

            if (z < x)
            {

                menor = z;
            }
        }

        else if (z > x && z > y)

        {

            maior = z;

            if (x < y)
            {

                menor = x;
            }

            if (y < x)
            {

                menor = y;
            }
        }
    }

    printf("\n %d e o maior número, %d e o menor número ", maior, menor);

    return 0;
}