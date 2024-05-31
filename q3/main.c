#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d;
    float max;

    printf("The program finds the largest number entered, enter (0) to exit.\n");
    printf("Enter a number: ");
    scanf("%f", &d);
    max = d;

    if(d == 0) return 0; // entering zero terminates the program.

    for(;;)
    {
        printf("Enter a number: ");
        scanf("%f", &d);
        if(d == 0) break; // exit statement

        if(d > max) // if the current input is greater than the current maximum
        {
            max = d; // assign the current input to the maximum
        }
    }

    printf("\nLARGEST : %.6f", max); // prints up to 6 decimals

    return 0;
}
