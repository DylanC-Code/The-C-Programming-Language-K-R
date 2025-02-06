#include <stdio.h>

int main()
{
    int c, blank, tab, new_line;

    printf("Specials character counter.\n");
    printf("Type special character like tab, new line or space and then insert an EOF character.\n\n");

    c = getchar();
    blank = 0;
    tab = 0;
    new_line = 0;

    while (c != EOF)
    {
        if (c == ' ')
        {
            blank++;
        }
        else if (c == '\t')
        {
            tab++;
        }
        else if (c == '\n')
        {
            new_line++;
        }

        c = getchar();
    }

    printf("\n\nThere were %d blanks, %d tabs and %d new lines.\n", blank, tab, new_line);

    return 0;
}