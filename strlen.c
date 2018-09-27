#include <stdio.h>

/* counts characters in a string */
main(int argc,char* argv[])
{
    int charcount;

    charcount = 0;
    while (getchar() != EOF)
        ++charcount;
    printf("%d\n", charcount);
}