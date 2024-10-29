/*Faça um programa para ler a idade, o gênero (masc=1/fem=2) e o peso de 5 pessoas.
Após as leituras dos dados mostre:

O número de homens e o número de mulheres;
A média dos pesos dos homens;
A média das idades das mulheres;
A média do peso e das idades do grupo;
*/

#include <stdio.h>
int main ( void )
{
    int idade, peso, genero, masc = 0, fem = 0, mediaPesoH = 0, mediaIdadeM = 0, mediaPesoGeral = 0, mediaIdadeGeral = 0;

    for ( int i = 0; i < 5; i++ )
    {
        printf("\nQual o seu genero ? \n1 = Masculino  -  2 = Feminino :");
        scanf("%d", &genero);
        getchar();

        if ( genero == 1 )
        {
            masc++;

            printf("\nQual o seu peso : ");
            scanf("%d", &peso);
            printf("\nQual sua idade : ");
            scanf("%d", &idade);

            mediaPesoH = peso + mediaPesoH;
            mediaPesoGeral = mediaPesoGeral + peso;
            mediaIdadeGeral = mediaIdadeGeral + idade;
        }

        else if ( genero == 2 )
        {
            fem++;

            printf("\nQual o seu peso : ");
            scanf("%d", &peso);
            getchar();
            printf("\nQual sua idade : ");
            scanf("%d", &idade);

            mediaIdadeM = idade + mediaIdadeM;
            mediaPesoGeral = mediaPesoGeral + peso;
            mediaIdadeGeral = mediaIdadeGeral + idade;
        }
    }
    mediaPesoH = mediaPesoH / masc;
    mediaIdadeM = mediaIdadeM / fem;
    mediaIdadeGeral = mediaIdadeGeral / 5;
    mediaPesoGeral = mediaPesoGeral / 5;

    printf("\nO grupo tem %d Mulheres e %d Homens", fem,masc);
    printf("\nA media dos peso dos homens = %d", mediaPesoH);
    printf("\nA media da idade das mulheres = %d", mediaIdadeM);
    printf("\nA media da idade de todos = %d \nA media do peso de todos = %d", mediaIdadeGeral, mediaPesoGeral);

    return 0;
}
