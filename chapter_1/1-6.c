#include <stdio.h>
/* copy input to output; 2nd version */
int main()
{
    printf("Press enter to see if a char equal to EOF.\n");

    int c = getchar();
    int expression = getchar() != EOF;

    printf("(char '%d' != EOF) is equal to %d.\n", c, expression);
    return 0;
}