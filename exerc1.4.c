#include <stdio.h>

main()
{
	float fahr, celsius;
	int inicio, fim, incr;

	inicio = 0;	/* limite inferior da tabela */
	fim = 300;	/* limite superior da tabela */
	incr = 20;	/* incremento */

	fahr = inicio;
	printf("%6s%3s\n----------\n", "C", "F");
	while(fahr<=fim) {
		celsius = (5.0/9.0)*(fahr-32.0);
		printf("%6.1f %3.0f\n", celsius, fahr);
		fahr = fahr + incr;
	}
}
