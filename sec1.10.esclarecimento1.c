#include<stdio.h>

/* este programa nao compila: falta, no corpo da funcao main, a declaracao de que x eh uma variavel inteira externa */
int main()
{
	x = 4;

	printf("%d\n", x);

	return 0;
}

int x;
