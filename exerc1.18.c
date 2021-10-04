#include <stdio.h>

#define MAXLINHA 1000	/* tamanho maximo da linha entrada */

int lelinha(char s[], int lim);
int len(char s[]);
void eliminaespacostabsfinais(char linha[]);
void descartalinha(char linha[]);
void salvalinha(char linha[]);

/* descarta as linhas inteiramente brancas (i.e., compostas apenas por espacos e tabulacoes);
	elimina espacos e tabs finais,
	"descartando" a linha se ela reduzir-se ao caractere delimitador de linha '\n'
	e a "salvando" em caso contrario */
int main()
{
	char linha[MAXLINHA];
	while(lelinha(linha, MAXLINHA) > 0) {
		eliminaespacostabsfinais(linha);
		if(linha[0] == '\n')
			descartalinha(linha);
		else
			salvalinha(linha);
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

int len(char s[])
{
	int slen;
	slen = 0;
	while(s[slen] != '\0')
		++slen;
	return slen;
}

void eliminaespacostabsfinais(char linha[])
{
	int i;
	i = len(linha)-2;
	while(linha[i] == ' ' || linha[i] == '\t')
		--i;
	linha[i+1] = '\n';
	linha[i+2] = '\0';
}

void descartalinha(char linha[])
{
	printf("%s\n", "linha descartada"); /* nosso objetivo eh apenas informar ao usuario que a linha foi ignorada, descartada */
}

void salvalinha(char linha[])
{
	printf("%s\n", "linha salva");  /* nosso objetivo eh apenas informar ao usuario que a linha foi mantida (ou salva em algum (outro) lugar) */
}
