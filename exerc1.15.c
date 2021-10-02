#include <stdio.h>

int fahrenheit2celsius(int fahr);

int fahrenheit2celsius(int fahr) {
	return 5*(fahr-32)/9;
}

	/* imprime a tabela de conversao Fahrenheit-Celsius
		para fahr = 0, 20, ..., 300 */
main()
{
	int fahr;
	int inicio, fim, incr;

	inicio = 0;	/* limite inferior da tabela */
	fim = 300;	/* limite superior */
	incr = 20;	/* incremento */

	fahr = inicio;
	while(fahr <= fim) {
		printf("%d\t%d\n", fahr, fahrenheit2celsius(fahr));
		fahr = fahr + incr;
	}
}
