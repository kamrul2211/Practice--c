#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("Celsius to Fahrenheit Table\n");
    while (celsius <= upper)
    {
        fahrenheit = (celsius - 32.0) * (5.0 / 9.0);
        printf("%6.1f %3.0f\n ",fahrenheit ,celsius );
        celsius = celsius + step;
    }
    return 0;
}