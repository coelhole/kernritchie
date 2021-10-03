#include <stdio.h>

minhafuncao(int vetor[]);

minhafuncao(int vetor[])
{
	vetor[0] = 2*vetor[0];

	printf("valor de vetor[0] conforme modificado pela funcao e antes de minhafuncao retornar para main: %d\n", vetor[0]);
}

/* uma funcao C opera diretamente sobre um vetor
	e nao sobre uma copia sua */
main()
{
	int vetor[2];

	vetor[0] = 10;
	vetor[1] = 17;

	printf("valor da posicao vetor[0] antes de vetor ser passado para a funcao: %d\n", vetor[0]);
	minhafuncao(vetor);
	printf("valor da posicao vetor[0] apos a funcao retornar para main: %d\n", vetor[0]);
}
