#include <stdio.h>

prog1_9()
{
	int c, canterior;

	while((c = getchar()) != EOF){
		if(c != ' ')
			putchar(c);
		if(c == ' ')
			if(canterior != ' ')
				putchar(c);
		canterior = c;
	}
}
