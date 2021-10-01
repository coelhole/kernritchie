#include <stdio.h>

prog1_9()
{
	int c, canterior;

	while((c = getchar()) != EOF){
		if(c == ' '){
			if(canterior != ' ')
				putchar(c);
		}
		else
			putchar(c);
		canterior = c;
	}
}
