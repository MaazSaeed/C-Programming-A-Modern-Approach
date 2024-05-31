#include <stdio.h>
#include <stdlib.h>

int main()
{
    //for(int i = 10; i >= 1; i /= 2)
    //{
    //  printf("%d ", i++);
    //}

    // same program using while loop
    int i = 10;
    while(i >= 1)
    {
        printf("%d ", i++);
        i /= 2;
    }

    return 0;
}
