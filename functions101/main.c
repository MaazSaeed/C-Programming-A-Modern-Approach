#include <stdio.h>
#include <stdlib.h>

int check(int x, int y, int n);

int main()
{
    for(;;)
    {
        int uI1, uI2, range;

        printf("Enter two numbers to see if they are in a given range that is the third input.\n");
        scanf("%d %d %d", &uI1, &uI2, &range);

        if(check(uI1, uI2, range) == 1) printf("In range.");
        else printf("Not in the given range.");

        printf("\n");
    }

    return 0;
}

int check(int x, int y, int n)
{
    return x < n && y < n ? 1 : 0;
}
