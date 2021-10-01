#include <stdio.h>

prog1_8()
{
    int c, ns, nt, nl;
    ns = nt = nl = 0;

    while((c = getchar())!=EOF){
        if(c == ' ')
            ++ns;
        if(c == '\t')
            ++nt;
        if(c == '\n')
            ++nl;
    }

    printf("ESP.= %d, TAB. = %d, NL. = %d.\n", ns, nt, nl);
}
