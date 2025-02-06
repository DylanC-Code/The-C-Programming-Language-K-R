#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define IN 1
#define OUT 0
#define SIZE_MAX 100

void add_char_to_word(char c, char **word, int *capacity)
{
    int len = strlen(*word);

    if (len >= *capacity)
    {
        *capacity += SIZE_MAX;
        char *new_word = realloc(*word, *capacity * sizeof(char));

        *word = new_word;
    }

    (*word)[len] = c;
    (*word)[len + 1] = '\0';
}

int main()
{
    int c, state, capacity;
    char *word;

    c = getchar();
    state = OUT;
    capacity = SIZE_MAX;
    word = malloc(capacity * sizeof(char));

    while (c != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            capacity = SIZE_MAX;

            printf("\n%s", word);
            free(word);

            word = malloc(capacity * sizeof(char));
            word[0] = '\0';
        }
        else if (state == OUT)
        {
            state = IN;
            add_char_to_word(c, &word, &capacity);
        }
        else
        {
            add_char_to_word(c, &word, &capacity);
        }

        c = getchar();
    }

    return 0;
}