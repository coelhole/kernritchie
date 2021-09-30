#include <stdio.h>

sec_1_1_esclarecimento_1()
{
    printf("Abaixo 1 linha em branco:\n\n");//1 linha em branco = uma sequencia de 2 '\n'
    printf("Abaixo 2 linhas em branco:\n\n\n");//2 linhas em branco = uma sequencia de 3 '\n'
    printf("Abaixo 3 linhas em branco:\n\n\n\n");//3 linhas em branco = uma sequencia de 4 '\n'
    printf("Abaixo 4 linhas em branco:\n\n\n\n\n");//4 linhas em branco = uma sequencia de 5 '\n'
    printf("Abaixo 5 linhas em branco:\n\n\n\n\n\n");//5 linhas em branco = uma sequencia de 6 '\n'
    printf("Abaixo 6 linhas em branco:\n\n\n\n\n\n\n");//6 linhas em branco = uma sequencia de 7 '\n'
    printf("Abaixo 7 linhas em branco:\n\n\n\n\n\n\n\n");//7 linhas em branco = uma sequencia de 8 '\n'
    /* temos sempre um '\n' a mais por conta da quebra de linha:
    saltar uma linha eh mudar para a proxima linha e mudar de linha mais uma vez
    (o '\n' a mais eh por conta do "abaixo") */
    printf("etc.\n");
}
