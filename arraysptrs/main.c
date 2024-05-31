#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int *p = a; p < a+5; p++)
        sum += *p;

    printf("%d", sum);

    return 0;
}
