#include <stdio.h>
#include <stdlib.h>

int main()
{
    // insanity with the FOR LOOP
    for(int i = 0, j = 0, x = 5; i < 10 || j < 5 || x < 2; i++, j++, x++)
    {
        printf("%10d%10d%10d\n", i, j, x);
    }

    for(;;)
    {
        // an infinite loop
        // same as----------> while(true) { }
    }
    return 0;
}
