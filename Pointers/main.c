#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], (*p)[3], i = 1;

    for(p = a; p < a + 3; p++) *(p)[i] = 0;

    for(int *x = &a[0][0]; x <= &a[3][3]; x++)
        printf(" %d", *p);

    return 0;
}
