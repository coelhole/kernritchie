#include <stdio.h>

main()
{
	int c, canterior;
	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t' && c != '\n')
			putchar(c);
		/* ELSE: c == ' ' || c == '\t' || c == '\n' */
		else if(canterior != ' ' && canterior != '\t' && canterior != '\n')	/* uma cadeia composta por ' ', '\t' e '\n' deve produzir uma unica quebra de linha */
			putchar('\n');
		canterior = c;
	}
}
