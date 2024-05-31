#include <stdio.h>
#include <stdlib.h>

int Sum(int *p, int N);

int main()
{
    int a[] = {1, 1, 2, 3, 1};

    int s = Sum(a, 5);

    printf("%d ", s);


    return 0;
}

int Sum(int *p, int N)
{
    int sum = 0;
    int *init = p;
    for(;p < init + N; p++) sum += *p;

    return sum;
}
