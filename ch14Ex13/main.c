#include <stdio.h>
#include <stdlib.h>

#define N 100

void f(void);

int main(void)
{
    f();
    #ifdef N
    #undef N
    #endif // N

    return 0;
}

void f(void)
{
    #ifdef N
        printf("N is %d", N);
    #else
        printf("N is undefined\n");
    #endif // N
}
