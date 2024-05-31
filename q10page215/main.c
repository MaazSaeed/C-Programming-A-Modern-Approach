#include <stdio.h>
#include <stdlib.h>

int largest(int numbers[], int n);
int average(int numbers[], int n);

int main()
{
    int numbers[] = {1, 2, -3, 4, 5};

    printf("Largest element: %d\n", largest(numbers, 5));
    printf("average of elements: %d\n", average(numbers, 5));
    printf("total positive elements: %d", posElements(numbers, 5));
    return 0;
}

int largest(int numbers[], int n)
{
    int largest = numbers[0];

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n ; j++)
        {
            if(numbers[j] > largest) largest = numbers[j];
        }
    }

    return largest;
}

int average(int numbers[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++ ) sum += numbers[i];

    return sum / n;
}

int posElements(int numbers[], int n)
{
    int total;

    for(int i = 0; i < n; i++)
    {
        if(numbers[i] > 0) total++;
    }

    return total;
}
