#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define IN 1
#define OUT 0
#define MAX_WORD_SIZE 100
#define MAX_WORDS 100

void add_char_to_word(char c, char **word, int *capacity)
{
    int len = strlen(*word);

    if (len >= *capacity)
    {
        *capacity += MAX_WORD_SIZE;
        char *new_word = realloc(*word, *capacity * sizeof(char));

        *word = new_word;
    }

    (*word)[len] = c;
    (*word)[len + 1] = '\0';
}

void add_new_word(char *word, char **pwords[])
{
    int pchar_size = sizeof(char *);
    char *words[] = *pwords;
    int words_size = sizeof(words) / pchar_size;

    for (int word_index = 0; word_index <= words_size; word_index++)
    {
        printf("Word n %d", word_index);
        if (words[word_index] == NULL)
        {
            words[word_index] = word;
            return;
        }

        if ((word_index + 1) > words_size)
        {
            pwords = realloc(words, (words_size + MAX_WORDS) * pchar_size);
            char *words[] = *pwords;
            words[word_index + 1] = word;
            words[word_index + 2] = NULL;
            return;
        }
    }
}

int main()
{
    int c, state, capacity;
    char *words[MAX_WORDS] = {NULL};
    char *word;

    c = getchar();
    state = OUT;
    capacity = MAX_WORD_SIZE;
    word = malloc(capacity * sizeof(char));

    while (c != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            capacity = MAX_WORD_SIZE;

            add_new_word(word, &words);

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