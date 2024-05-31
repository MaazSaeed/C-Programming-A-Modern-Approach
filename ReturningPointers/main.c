#include <stdio.h>
#include <stdlib.h>
#define N 7

int *FindLargest(int a[], int n);

int main()
{
    int n[N] = {1212, 699, 5, 3, -2, 999, 1696};

    //int *x = FindLargest(n, 5);

    printf("Largest: %d\n", *FindLargest(n, N));
    printf("Address of the largest: %p", FindLargest(n, N));
    printf("\n");

    return 0;
}

int *FindLargest(int a[], int n)
{
    int *indexOfLargest;
    int largest = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[largest] > a[i + 1])
            indexOfLargest = &a[largest];
        else
        {
            largest = i + 1;
            indexOfLargest = &a[i + 1];
        }
    }

    return indexOfLargest;
}
