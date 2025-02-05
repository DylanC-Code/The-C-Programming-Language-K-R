#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
main()
{
    int celsius;

    printf("Celsius-Fahrenheit Table \n\n");

    for (celsius = 300; celsius >= 0; celsius -= 20)
    {
        printf("%3d %6.0f\n", celsius, (celsius * (9.0 / 5.0)) + 32);
    }
}