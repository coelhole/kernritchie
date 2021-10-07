#include<stdio.h>

#define MAXLINHA 1000	/* tamanho maximo da linha entrada */
#define TAB "        "  /* 1 tab = 8 espacos */
#define TABSIZE 8

int lelinha(char s[], int lim);
int len(char s[]);
void destab(char s[], int lim);

/* substitui toda tabulacao (caractere '\t') por uma sequencia de 8 espacos */
int main(void)
{
	char linha[MAXLINHA];
	while(lelinha(linha, MAXLINHA) > 0)
		destab(linha, MAXLINHA);
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

int len(char s[])
{
	int slen;
	slen = 0;
	while(s[slen] != '\0')
		++slen;
	return slen;
}

void destab(char s[], int lim)
{
	int l, m, n;
	n = 0;
	l = len(s);
	while(s[n] != '\0') {
		if(s[n] == '\t') {
			if(lim-l < TABSIZE-1) {
				printf("nao eh possivel trocar o tab da posicao %d por %n espacos: excederia o limite da string", n, TABSIZE);
				return;
			} else {
				m = l;
				while(m > n) {
					s[m+(TABSIZE-1)] = s[m];
					--m;
				}
				for(m=n; m < n+TABSIZE; ++m)
					s[m] = ' ';
				l = l + TABSIZE - 1;
				n = n + TABSIZE - 1;
			}
		}
		++n;
	}
}
