#include <stdio.h>

int main()
{
    int c, blank, tab, new_line;

    printf("Multiple space correcter.\n");

    c = getchar();
    blank = 0;

    while (c != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            blank = 0;
        }
        else if (blank == 0)
        {
            putchar(c);
            blank++;
        }

        c = getchar();
    }

    return 0;
}