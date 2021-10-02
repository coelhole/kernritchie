#include <stdio.h>

main()
{
	printf("Para sair, tecle enter...");
	int c = (getchar()!=EOF);
	printf("(getchar()!=EOF) is %d.\n", c);
}
