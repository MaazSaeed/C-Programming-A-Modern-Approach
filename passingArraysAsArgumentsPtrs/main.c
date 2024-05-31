#include <stdio.h>
#include <stdlib.h>
#define N 10

int FindLargest(int a[], int n);

int main()
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 88, 9, 10};

    int largest = FindLargest(&a[0], N);

    printf("Largest: %d", largest);


    return 0;
}

int FindLargest(int a[], int n)
{
    int max = *a

    for(int i = 1; i< n; i++)
        if(a[i] > max) max = a[i];

    return max;
}
