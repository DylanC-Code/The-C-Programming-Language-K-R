#include <stdio.h>

int main()
{
    int c, blank, tab, new_line;

    printf("Multiple space correcter.\n");

    c = getchar();
    blank = 0;

    while (c != EOF)
    {
        if (c == '\t')
        {
            printf("\\t");
        }
        else if (c == '\b')
        {
            printf("\\b");
        }
        else
        {
            putchar(c);
        }

        c = getchar();
    }

    return 0;
}