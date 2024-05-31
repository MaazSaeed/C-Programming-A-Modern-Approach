#include <stdio.h>
#include <stdlib.h>

int main()
{
    float e = 1.0f;
    int d;

    // this program approximates the value of e...
    printf("Enter the approximation for e: ");
    scanf("%d", &d);

    for(int i = 1; i < d; i++)
    {
        int factorial = 1;

        for(int x = 1; x <= i; x++) factorial *= x;

        e += (1.0f/factorial);
    }

    printf("e: %f", e);

    return 0;
}
