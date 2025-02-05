#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -273;
    upper = 300;
    step = 20;
    celsius = lower;

    printf("Celsius-Fahrenheit Table \n\n");
    while (celsius <= upper)
    {
        fahr = (celsius * (9.0 / 5.0)) + 32;
        printf("%3.0f %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}