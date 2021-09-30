#include <stdio.h>

prog1_4()
{
    float fahr, celsius, inicio, fim, incr;

    inicio = (5.0/9.0)*(0-32.0);            /* limite inferior da tabela */
    fim = (5.0/9.0)*(300-32.0);             /* limite superior da tabela */
    incr = (5.0/9.0)*(20-32.0) - inicio;    /* incremento */

    celsius = inicio;
    printf("%6s%3s\n----------\n", "C", "F");
    while(celsius<=fim) {
        fahr = (9.0/5.0)*celsius + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + incr;
    }

    /* a ultima linha nao eh impressa: arredondar o limite superior (fim) para cima corrige isso */
}
