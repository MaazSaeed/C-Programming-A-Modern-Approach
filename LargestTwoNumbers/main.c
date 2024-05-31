#include <stdio.h>
#include <stdlib.h>
#define N 10

void FindTwoLargest(int a[], int n, int *largest, int *secondLargest);

int main()
{
    int a[N] = {3, 9, 2, 69, 4, 22, 6, 7, 8, 90};

    int largest, secondLargest;

    FindTwoLargest(a, N, &largest, &secondLargest);
    printf("Largest: %d, Second Largest: %d", largest, secondLargest);

    return 0;
}

void FindTwoLargest(int a[], int n, int *largest, int *secondLargest)
{
    if (a[0] > a[1]) {
        *largest = a[0];
        *secondLargest = a[1];
    } else {
        *largest = a[1];
        *secondLargest = a[0];
    }

    for(int i = 0; i < n; i++) if(a[i] > *largest) *largest = a[i];
    for(int i = 0; i < n; i++) if(a[i] > *secondLargest && a[i] < *largest) *secondLargest = a[i];
}
