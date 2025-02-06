#include <stdio.h>
/* copy input to output; 2nd version */
int main()
{
    printf("Press enter to see if a char equal to EOF or CTRL+D to generate an EOF character.\n");

    int c = getchar();
    int expression = getchar() != EOF;

    while (c != EOF)
    {
        printf("char '%d' != EOF\n", c);
        c = getchar();
    }

    printf("EOF has been pressed.\n");
    return 0;
}