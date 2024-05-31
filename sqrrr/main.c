#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y = 1;
    float h = 2;

    float avg;

    int c;

    printf("Enter a positive number: ");
    scanf("%f", &x);

    for(c = 0; c < 20; c++)
    {
        avg = (double)(((x/y) + y)) / 2;
       y = avg;
    }

    printf("sqrt: %f\n", avg);

    return 0;
}
