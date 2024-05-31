#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main()
{
    int i = 6, j = 9;

    swap(&i, &j);

    printf("i: %d, j: %d", i , j);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
