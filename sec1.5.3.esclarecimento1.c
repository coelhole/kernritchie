#include <stdio.h>

sec_1_5_3_esclarecimento_1()
{
    int c = 'a';

	/* TESTE DE IGUALDADE ERRADO! */
    printf("Valor de c, antes do if, eh igual a %d (que represante o caractere \'%c\').\n", c, c);
    if(c = 'A')
        printf("Sim, a condicao eh verdadeira! (Eh diferente de 0!)\nc eh %d e \'A\' eh %d.\n", c, 'A');
    printf("Note que o if mudou o valor de c! Por que?\nOra, = eh o operador de atribuicao e nao de igualdade! O operador de igualdade eh ==.\n");
    printf("Primeiro c recebeu o valor numérico de \'A\' (%d) e, apenas depois, verificou se o valor de c era diferente de 0 (isto eh, \"verdadeiro\")\n", 'A');
	/* ************************* */

    printf("\n\n\n");
    c = 'a';

    /* TESTE DE IGUALDADE CERTO! (IGUAL A ZERO!)*/
    if(c == 'A')    /* o comando printf nao sera executado porque c eh igual a 'a' e 'a' eh diferente de 'A' */
        printf("Sim, c eh igual a %d e \'%c\' eh igual a %d e, portanto, c eh igual a \'%c\'.\n", c, 'A', 'A', 'A');
	/* **************************************** */

    printf("\n\n\n");
    c = 'A';
	
	/* TESTE DE IGUALDADE CERTO! (DIFERENTE DE ZERO!) */
    if(c == 'A')    /* o comando printf sera executado porque c eh igual a 'A' e 'A' eh igual a 'A' */
        printf("Sim, c eh igual a %d e \'%c\' eh igual a %d e, portanto, c eh igual a \'%c\'.\n", c, 'A', 'A', 'A');
	/* ********************************************** */
}
