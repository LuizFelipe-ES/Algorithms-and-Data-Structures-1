// Faça um programa que leia um valor qualquer em reais (R$) e após converta este valor para dólar (US$) e também para o euro(E$).

#include <stdio.h>
int main(void)
{
    double real, euro = 6.10, dolar = 5.48;

    printf("\nDigite a quantidade de reais a serem convertidos : ");
    scanf("%lf", &real);
    getchar();

    euro = real / euro;
    dolar = real / dolar;

    printf("\n%lf reais sao %lf euros convertidos. \n%lf reais sao %lf dolares convertidos. ", real, euro, real, dolar);

    return 0;
}