#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int n[N] = {0};

    printf("Enter 10 numbers: ");

    for(int *p = n; p < n + N; p++)
        scanf("%d", p);

    for(int *p = n + N - 1; p >= n; p--)
        printf("%d ", *p);

    return 0;
}
