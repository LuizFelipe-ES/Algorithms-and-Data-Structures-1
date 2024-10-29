/*Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária.
Com isto, espera aumentar sua taxa de ocupação de 50 para 80%. Sendo dado o valor normal da diária, calcular e imprimir:

o valor da diária promocional;
o valor total arrecadado com 80% de ocupação e diária promocional;
o valor total arrecadado com 50% de ocupação e diária normal;
a diferença entre estes dois valores. */

#include <stdio.h>

int main(void)
{
    int apartamentos = 75, ocupacao50, ocupacao80;
    double diaria, diariapromo, lucronormal, lucropromo, diferenca;

    printf("\nDigite o valor da diaria do hotel : ");
    scanf("%lf", &diaria);
    getchar();

    diariapromo = (diaria / 4) * 3;
    ocupacao80 = (apartamentos / 5) * 4;
    ocupacao50 = apartamentos / 2;

    lucropromo = ocupacao80 * diariapromo;
    lucronormal = ocupacao50 * diaria;
    diferenca = lucropromo - lucronormal;

    printf("\nValor da diaria promocinal = %.2lf \nValor arrecadado com 80 porcento de ocupacao e diaria promocional = %.2lf 
    \nValor arrecadado com metade da ocupacao e diaria com preco comum = %.2lf", diariapromo, lucropromo, lucronormal);
    
    printf("\nA promocao lucrou %.2lf a mais que o valor comum", diferenca);

    return 0;
}