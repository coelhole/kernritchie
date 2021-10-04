#include <stdio.h>

#define MAXLINHA 1000	/* tamanho maximo da linha entrada */

int lelinha(char s[], int lim);
void copia(char para[], char de[]);
int len(char s[]);
void inverte(char s[]);

/* imprime as linhas entradas na ordem inversa */
int main()
{
	char linha[MAXLINHA];
	while(lelinha(linha, MAXLINHA) > 0) {
		inverte(linha);
		printf("%s\n", linha);
	}
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

void copia(char para[], char de[])
{
	int i;

	i = 0;
	while((para[i] = de[i])!='\0')
		++i;
}

int len(char s[])
{
	int slen;
	slen = 0;
	while(s[slen] != '\0')
		++slen;
	return slen;
}

void inverte(char s[])
{
	int i, l;
	l = len(s);
	char clone[l];
	copia(clone, s);
	for(i=l-1; i>=0; --i)
		s[l-1-i] = clone[i];
}
