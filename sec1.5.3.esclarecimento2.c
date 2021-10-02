#include <stdio.h>

main()
{
	int inicio, inicio2, fim;

	if('A' > 'a') {
		inicio = 'a';
		inicio2 = 'A';
		fim = 'z';
	} else {
		inicio = 'A';
		inicio2 = 'a';
		fim = 'Z';
	}

	int distancia = inicio2-inicio;

	printf("(PROGRAMA \"TODAS AS LETRAS DA TABELA ASCII\")\n\nLETRA\tCODIGO ASCII\n");
	for(int c = inicio; c <= fim; c++) {
		printf("%c\t%d\n", c, c);
		printf("%c\t%d\n", c+distancia, c+distancia);
	}
}
