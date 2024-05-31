#include <stdio.h>
#include <stdlib.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

    float farenheit, celsius;

int main()
{
    int current__balance;
    printf("Enter temperature in farenheit: ");
    scanf("%f", &farenheit);
    celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Temperature in Celsius: %.1f", celsius);
    exit(0);
}
