/*Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela.
Se o motorista estiver dentro do limite de velocidade, imprima a mensagem “Motorista respeitou a lei”.
Se o motorista tiver ultrapassado a velocidade máxima permitida, calcule e imprima o valor da multa a ser cobrada,
sabendo que os valores a serem cobrados são os seguintes:

50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex: se a velocidade máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h);
100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
200 reais, se estiver acima de 30km/h da velocidade permitida. */

#include <stdio.h>

int main(void)
{
    double vlcmax, vlcmotorista, diferenca;

    printf("\nDigite a velocidade maxima permitida na via : ");
    scanf("%lf", &vlcmax);
    getchar();

    printf("\nDigite a sua velocidade na via : ");
    scanf("%lf", &vlcmotorista);
    getchar();

    if (vlcmotorista <= vlcmax)
    {
        printf("\nMotorista respeitou a lei");
    }
    else
    {
        diferenca = vlcmotorista - vlcmax;

        if (diferenca <= 10)
        {
            printf("Voce ultrapassou o limite de velocidade em %lf e vai receber uma multa de R$50,00 reais.", diferenca);
        }
        else if (diferenca >= 11 && diferenca <= 30)
        {
            printf("Voce ultrapassou o limite de velocidade em %lf e vai receber uma multa de R$100,00 reais.", diferenca);
        }
        else if (diferenca > 30)
        {
            printf("Voce ultrapassou o limite de velocidade em %lf e vai receber uma multa de R$200,00 reais.", diferenca);
        }
    }
    return 0;
}