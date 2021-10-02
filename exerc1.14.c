#include <stdio.h>

main()
{
	/* estamos trabalhando apenas com caracteres ASCII */
	#define PRIMEIRO_CARACTERE_IMPRIMIVEL   32  /* espaco */
	#define ULTIMO_CARACTERE_IMPRIMIVEL     126 /* til */

	int c, i;
	int frequencias[ULTIMO_CARACTERE_IMPRIMIVEL-PRIMEIRO_CARACTERE_IMPRIMIVEL+1];

	for(i = 0; i <= ULTIMO_CARACTERE_IMPRIMIVEL-PRIMEIRO_CARACTERE_IMPRIMIVEL; ++i)
		frequencias[i] = 0;

	while((c = getchar()) != EOF)
		++frequencias[c-PRIMEIRO_CARACTERE_IMPRIMIVEL];

	/* HISTOGRAMA */
	for(i = 0; i <= ULTIMO_CARACTERE_IMPRIMIVEL-PRIMEIRO_CARACTERE_IMPRIMIVEL; ++i){
		printf("%3d ",PRIMEIRO_CARACTERE_IMPRIMIVEL+i);
		for(c = 0; c < frequencias[i]; ++c)
			putchar('=');
		putchar('\n');
	}
}
