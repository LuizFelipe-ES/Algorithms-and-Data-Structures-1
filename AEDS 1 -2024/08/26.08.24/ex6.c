/*Utilizando uma estrutura de repetição, implemente um programa em C para ler uma sequência de 8 números inteiros positivos e verificar se cada um deles é par ou ímpar,
escrevendo mensagem adequada.
Ex:  Digite um número: 4
“Número par !!! ”.
Digite um número: 5
“Número ímpar !!! ”.
Ao término indique quantos números pares e quantos ímpares foram digitados.
Total de pares =
Total de ímpares =  */

#include <stdio.h>
int main(void)
{
    int numero, par = 0, impar = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("\n\nDigite o numero : ");
        scanf("%d", &numero);
        getchar();

        if (numero % 2 == 0)
        {
            printf("Numero Par");
            par++;
        }
        else
        {
            printf("Numero Impar");
            impar++;
        }
    }
    printf("\n\nTotal de pares = %d \nTotal de impares = %d", par, impar);

    return 0;
}