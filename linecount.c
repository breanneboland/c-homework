#include <stdio.h>

/* counts lines in input */
main()
{
    int c, nl;
    // char str[] = "let's count words\n
    //     counting words still\n
    //     wait, actually counting lines\n";

    nl = 0;
    while ((c = getchar()) != EOF) 
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}