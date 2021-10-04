#include<stdio.h>

/* este programa compila pois foi declarado no corpo da funcao main que x eh uma variavel externa */
int main()
{
	extern int x;

	x = 4;

	printf("%d\n", x);

	return 0;
}

int x;
