/*Utilizando uma estrutura de repetição, implemente um programa em C para ler uma sequência de 5 números inteiros positivos e
verificar se cada um deles é divisível por 3, escrevendo mensagem adequada.
Ex:
Digite um número: 3
“É divisível por 3”.
Digite um número: 5
“Não é divisível por 3”.
Cole aqui abaixo o código C da sua solução.*/

#include <stdio.h>
int main(void)
{
    int numero;

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nDigite o numero : ");
        scanf("%d", &numero);
        getchar();

        if (numero % 3 == 0)
        {
            printf("E divisivel por 3 ");
        }
        else
        {
            printf("Nao e divisivel por 3");
        }
    }

    return 0;
}