#include <stdio.h>

prog1_6()
{
    int c;

    /* como o operador relacional != ('nao eh igual a')
        precede o operador de atribuicao = (leia: o que esta a esquerda recebe o que esta a direita)
        na avaliacao da expressao,
        c sempre armazena o valor de getchar()!=EOF que eh sempre 1 (verdadeiro)
    */
    while(c = getchar() != EOF)
        printf("a variavel inteira c recebeu o valor %d.\n",c);
    /* imprime sempre uma linha a mais do que o numero de letras contidas na palavra fornecida (com o teclar de <ENTER>):
        essa linha a mais se deve ao caractere '\n' (quebra de linha) que tambem eh lido por getchar() */
}
