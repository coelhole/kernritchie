#include <stdio.h>

main()
{
    int c;
    printf("Escreva algo e tecle <enter> para que a sequencia dos caracteres fornecidos seja lida: ");
    while(c = getchar()){   /* como getchar() le do teclado, o caractere NUL ('\0'), que eh 0, nunca sera lido e, portanto, este eh um laco infinito */
        printf("Caractere lido: ");
        putchar(c);
        putchar('\n');
        if(c=='\n')
            printf("Escreva algo e tecle <enter> para que a sequencia dos caracteres fornecidos seja lida: ");
    }
}
