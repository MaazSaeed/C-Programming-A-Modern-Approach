#include <stdio.h>
#include <stdlib.h>
#define N 12

int main()
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int *p = &a[0], *q = &a[N - 1], temp;

    while(p < q)
    {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    for(int i = 0; i < N; i++)
        printf("%d ", *(a+i));

    return 0;
}
