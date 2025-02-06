#include <stdio.h>
#include <string.h>

#define MIN_LENGTH 80

void reset_line(char *line);
void put_line(char *line);

int main()
{
    int c;
    char line[MIN_LENGTH + 1] = {0};
    int length = 0;

    printf("Enter text (Ctrl+D to finish) :\n");

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            if (length >= MIN_LENGTH)
            {
                put_line(line);
            }
            reset_line(line);
            length = 0;
            continue;
        }

        if (length >= MIN_LENGTH)
        {
            putchar(c);
            continue;
        }

        line[length] = c;
        line[length + 1] = '\0';
        length++;
    }

    if (length >= MIN_LENGTH)
    {
        put_line(line);
    }

    return 0;
}

void reset_line(char *line)
{
    memset(line, 0, MIN_LENGTH + 1);
}

void put_line(char *line)
{
    printf("Put line: %s\n", line);
}
