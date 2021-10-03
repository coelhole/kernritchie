#include <stdio.h>

minhafuncao(int argumento);

minhafuncao(int argumento)
{
	argumento = 2*argumento;

	printf("valor do argumento recebido e modificado pela funcao: %d\n", argumento);
}

main()
{
	int argumento = 10;

	printf("valor da variavel argumento antes de ser passada para a funcao: %d\n", argumento);
	minhafuncao(argumento);
	printf("valor da variavel argumento apos a funcao retornar para main: %d\n", argumento);
}
