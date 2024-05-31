#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int a[N], i;
    // int a[15] = { [2] = 29, [9] = 7, [14] = 48}; // a designated initializer
    printf("Enter %d numbers: ", N);

    for(i = 0; i < N; i++) scanf("%d", &a[i]);

    printf("Reversal: ");

    for(i = N - 1; i >= 0; i-- ) printf("%d ", a[i]);


    return 0;
}
