#include <stdio.h>
#include <stdlib.h>
#define N 10

void MaxMin(int a[], int n, int *max, int *min);

int main()
{
    int numbers[N] = {0};
    int largest, smallest;

    printf("Enter 10 numbers: ");
    for(int i = 0; i < N; i++)
        scanf("%d", &numbers[i]);

    MaxMin(numbers, N, &largest, &smallest);

    printf("Largest: %d\n", largest);
    printf("Smallest: %d", smallest);

    return 0;
}

void MaxMin(int a[], int n, int *max, int *min)
{
    *max = *min = a[0];

    for(int i = 0; i < n; i++)
        if(a[i] < *min)
            *min = a[i];
        else if(a[i] > *max)
            *max = a[i];

}
