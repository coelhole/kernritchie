#include<stdio.h>

#define MAXLINHA 1000	/* tamanho maximo da linha entrada */
#define TAB "        "	/* 1 tab = 8 espacos */
#define TABSIZE 8

int lelinha(char s[], int lim);
void tab(char s[]);

/* substitui toda sequencia de 8 espacos por uma tabulacao (caractere '\t') */
int main(void)
{
	char linha[MAXLINHA];
	while(lelinha(linha, MAXLINHA) > 0)
		tab(linha);
	return 0;
}

/* lelinha: le uma linha em s, retorna tamanho */
int lelinha(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim-1 && (c=getchar())!=EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void tab(char s[])
{
	int m, n, p;
	m = 0;	/* contador de espacos */
	n = 0;
	while(s[n] != '\0') {
		if(s[n] == ' ')
			++m;
		else
			m = 0;
		if(m == TABSIZE) {
			s[n-(TABSIZE-1)] = '\t';
			p = n-(TABSIZE-2);
			while(s[n+1] != '\0') {
				s[n-(TABSIZE-2)] = s[n+1];
				++n;
			}
			s[n-(TABSIZE-2)] = '\0';
			n = p;
			m = 0;
		}
		else
			++n;
	}
}
