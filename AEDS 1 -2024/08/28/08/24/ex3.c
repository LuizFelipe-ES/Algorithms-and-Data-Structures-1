/*Um país A possui uma população de 80.000.000 habitantes e cresce a uma taxa de 1,5% ao ano.
Já o país  B possui 65.000.000 habitantes e cresce a uma taxa de 3% ao ano.
Pergunta-se: mantidas constantes estas taxas de crescimento, quantos anos serão necessários para que o país B ultrapasse ou se iguale ao país A? */

#include <stdio.h>

int main(void)
{
    double paisA = 80.000000, paisB = 65.000000, ano = 0, aumentoA, aumentoB;

    while (paisA >= paisB)
    {
        aumentoA = (paisA * 1.5) / 100;
        aumentoB = (paisB * 3.0) / 100;

        paisA = paisA + aumentoA;
        paisB = paisB + aumentoB;

        ano++;
    }
    printf("\n Foram necessarios %.0lf anos para o pais A se igualar a populacao do pais B, e %.0lf anos para passar o pais.", ano, ano - 1);

    return 0;
}