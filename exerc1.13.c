#include <stdio.h>

main()
{
	#define TAMANHO_MAXIMO 100	/* vamos presumir que nenhuma palavra fornecida tenha mais do que 100 caracteres */

	int c, canterior, tamanho, maiortamanho, i;
	int tamanhos[TAMANHO_MAXIMO];

	maiortamanho = tamanho = 0;
	for(i = 0; i <= TAMANHO_MAXIMO; ++i)
		tamanhos[i] = 0;

	while((c = getchar()) != EOF) {
		if(c != ' ' && c != '\t' && c != '\n')
			++tamanho;
		else if(canterior != ' ' && canterior != '\t' && canterior != '\n') {
			++tamanhos[tamanho];
			if(tamanho>maiortamanho)
				maiortamanho=tamanho;
			tamanho = 0;
		}
		canterior = c;
	}

	/* HISTOGRAMA */
	for(i = 0; i <= maiortamanho; ++i) {
		printf("%3d ",i);
		for(c = 0; c < tamanhos[i]; ++c)
			putchar('=');
		putchar('\n');
	}
}
