/*Utilizando a estrutura de repetição WHILE, implemente um programa em C para ler as notas de 10 alunos, calcular e imprimir a média da turma.
Cole aqui abaixo o código C da sua solução. */

#include <stdio.h>
int main(void)
{
    int nota, alunos = 0, notass = 0, media;

    while (alunos < 10)
    {
        printf("\nDigite sua nota : ");
        scanf("%d", &nota);
        getchar();
        notass = nota + notass;

        alunos++;
    }

    media = notass / 10;

    printf("\nA media das notas = %d", media);

    return 0;
}