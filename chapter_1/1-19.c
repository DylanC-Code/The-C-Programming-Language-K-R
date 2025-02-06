#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LINE_LENGTH 5

void reverse_string(char *string_to_reverse);
void reset_string(char *str);
void get_line(char **p_line);

int main()
{
    char *line = malloc(sizeof(char) * LINE_LENGTH);

    while (1)
    {
        get_line(&line);
        reverse_string(line);
        printf("The reversed line is:\n\n %s\n\n", line);
        reset_string(line);
    }

    return 0;
}

void get_line(char **p_line)
{
    char *line = *p_line;

    int c;
    int capacity = LINE_LENGTH;

    while ((c = getchar()) != '\n')
    {
        int length = strlen(line);
        printf("Line length is %d.\n", length);

        if (length >= capacity)
        {
            capacity += LINE_LENGTH;
            *p_line = realloc(line, capacity * sizeof(char));
            line = *p_line;
        }

        line[length] = c;
        line[length + 1] = '\0';
    }
}

void reverse_string(char *string_to_reverse)
{
    int length = strlen(string_to_reverse);
    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        char tempo_right = string_to_reverse[right];

        string_to_reverse[right] = string_to_reverse[left];
        string_to_reverse[left] = tempo_right;

        left++;
        right--;
    }
}

void reset_string(char *str)
{
    int length = strlen(str);
    int char_index = 0;

    while (char_index < length)
    {
        str[char_index] = '\0';
        char_index++;
    }
}