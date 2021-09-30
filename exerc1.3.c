#include <stdio.h>

prog1_3()
{
    float fahr, celsius;
    int inicio, fim, incr;

    inicio = 0; /* limite inferior da tabela */
    fim = 300;  /* limite superior da tabela */
    incr = 20;  /* incremento */

    fahr = inicio;
    printf("%3s%6s\n----------\n", "F", "C");
    while(fahr<=fim) {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + incr;
    }
}
