#include <stdio.h>

#define MAXLINHA 1000	/* tamanho maximo da linha entrada */
#define TAMANHO_MINIMO 80

int lelinha(char linha[], int maxlinha);
void copia(char para[], char de[]);

/* imprime maior linha entrada */
int main()
{
	int tam;	/* tamanho corrente da linha */
	char linha[MAXLINHA];	/* linha corrente */
	while((tam = lelinha(linha, MAXLINHA)) > 0)
		if(tam > TAMANHO_MINIMO) {
			printf("%s", linha);
			while(linha[tam-1] != '\n') {
				tam = lelinha(linha, MAXLINHA);
				printf("%s", linha);
			}
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

/* copia: copia 'de' --> 'para'; presume que para eh grande
	o suficiente */
void copia(char para[], char de[])
{
	int i;

	i = 0;
	while((para[i] = de[i])!='\0')
		++i;
}
