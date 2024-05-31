#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        // Clever Method-1
        //int x, y, z;

        //printf("Enter a two digit number: ");
        //scanf("%1d%1d%1d", &x, &y, &z);

        //printf("The number reversed becomes: %1d%1d%1d\n", z, y, x);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Clever Method-2
        int num;

        printf("Enter a three digit number: ");
        scanf("%d", &num);

        printf("The reversal is: %d%d%d\n", num % 10, num / 10 % 10, num / 10 / 10 % 10);
    }
    return 0;
}
