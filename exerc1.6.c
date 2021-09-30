#include <stdio.h>

prog1_6()
{
    printf("Para sair, tecle enter...");
    int c = (getchar()!=EOF);
    printf("(getchar()!=EOF) is %d.\n", c);
}
