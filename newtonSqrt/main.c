#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    double y = 1;

    double avg;

    int c;

    printf("Enter a positive number: ");
    scanf("%g", &x);
    avg = x/y + y / 2.0;

    for(c = 0; c < 5; c++)
    {
        //avg = (double)(((x/y) + y)) / 2;
       //y = avg;
    }

    printf("sqrt: %g\n", avg);

    return 0;
}
