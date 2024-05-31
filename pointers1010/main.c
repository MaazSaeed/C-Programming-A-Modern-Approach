#include <stdio.h>
#include <stdlib.h>


void decompose(float value, int *x, float *y);

int main()
{
    float pi = 3.142;
    int intPart;
    float fracPart;

    decompose(pi, &intPart, &fracPart);
    printf("Int part: %d, fracPart: %f", intPart, fracPart);


    return 0;
}

void decompose(float value, int *x, float *y)
{
    *x = (int) value;
    *y = value - *x;
}
