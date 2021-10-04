#include<stdio.h>

int x;

/* este programa compila pois a variavel inteira x foi declarada acima do corpo da funcao main
	de modo que informar que x eh uma variavel externa nao se faz necessario */
int main()
{
	x = 4;

	printf("%d\n", x);

	return 0;
}
