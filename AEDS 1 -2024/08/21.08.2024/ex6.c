/*Construa um programa que lê uma opção conforme abaixo (usar estrutura SWITCH) e o salário atual do funcionário,
calcula e exibe o novo salário:

   1 = aumento de 8% no salário;
   2 = aumento de 11% no salário;
   3 = aumento fixo no salário
    (de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00 se o salário atual for maior que R$ 1000). */

#include <stdio.h>

int main(void)
{
    int x;
    double salario, aumento, novosalario;

    printf("\n1 - Aumento de 8 porcento de salario \n2 - Aumento de 11 porcento de salario \n3 - Aumento fixo no salario \nEscolha uma opcao :  ");
    scanf("%d", &x);
    getchar();

    printf("\nDigite o seu salario : ");
    scanf("%lf", &salario);
    getchar();

    switch (x)
    {
    case 1:
        aumento = (salario * 8) / 100;
        novosalario = salario + aumento;
        printf("\nSeu antigo salario e %.2lf e seu novo salario = %2.lf", salario, novosalario);
        break;
    case 2:
        aumento = (salario * 11) / 100;
        novosalario = salario + aumento;
        printf("\nSeu antigo salario e %.2lf e seu novo salario = %2.lf", salario, novosalario);
        break;
    case 3:
        if (salario <= 1000)
        {
            novosalario = salario + 350;
            printf("\nSeu antigo salario e %.2lf e seu novo salario = %2.lf", salario, novosalario);
        }
        else if (salario > 1000)
        {
            novosalario = salario + 200;
            printf("\nSeu antigo salario e %.2lf e seu novo salario = %2.lf", salario, novosalario);
        }
        break;
    }
    return 0;
}