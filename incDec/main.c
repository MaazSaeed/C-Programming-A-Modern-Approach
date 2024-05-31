#include <stdio.h>
#include <stdlib.h>

void inc(int *x);

int main()
{
    int x = 1;
    inc(&x);
    printf("%d", x);
    return 0;
}

void inc(int *x)
{
    ++*x;
}
