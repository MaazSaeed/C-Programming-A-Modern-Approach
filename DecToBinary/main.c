#include <stdio.h>
#include <stdlib.h>

void pb(int n);

int main()
{
    pb(1234);
    return 0;
}

void pb(int n)
{
    if(n != 0)
    {
        pb(n/2);
        putchar('0' + n % 2);
    }
}
