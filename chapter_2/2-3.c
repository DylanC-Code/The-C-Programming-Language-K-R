#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

void remove_hex_indicator(char **hex_digits);
int convert_hex_to_dec(char hex_digit);
int power(int base, int exponent);

int main(int argc, char *argv[])
{
    char *hex_digits, *original_value;
    hex_digits = original_value = argv[1];
    remove_hex_indicator(&hex_digits);

    short length = strlen(hex_digits);
    int char_index = 0;
    int dec_digits = 0;

    while (char_index < length)
    {
        char hex_digit = hex_digits[char_index];
        int dec_digit = convert_hex_to_dec(hex_digit);

        int exponent = length - char_index - 1;
        int dec_value = power(16, exponent) * dec_digit;

        dec_digits += dec_value;
        char_index++;
    }

    printf("The hexadecimal number '%s' converted in decimal equal '%d'.\n", original_value, dec_digits);

    return 0;
}

void remove_hex_indicator(char **p_hex_digits)
{
    char *hex_digits = *p_hex_digits;

    if (hex_digits[0] != '0')
    {
        return;
    }

    switch (hex_digits[1])
    {
    case 'x':
    case 'X':
        *p_hex_digits = &(hex_digits[2]);
        return;
    default:
        return;
    }
}

#define ALPHABET_LENGTH 26
#define SPACE_BETWEEN_LOWER_AND_UPPER 7

int convert_hex_to_dec(char hex_digit)
{
    if (hex_digit >= '0' && hex_digit <= '9')
    {
        return hex_digit - '0';
    }

    if (hex_digit >= 'a' && hex_digit <= 'f')
    {
        return hex_digit - 'a' + 10;
    }

    if ('A' >= hex_digit && hex_digit <= 'F')
    {
        return hex_digit - 'A' + 10;
    }

    printf("Invalid HEXADECIMAL character '%c'.\n", hex_digit);
    exit(1);
}

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}