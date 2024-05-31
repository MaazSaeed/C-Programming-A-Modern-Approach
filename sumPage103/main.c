#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    printf("Enter integers(0 to terminate): ");
    scanf("%d", &n);
    while(n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }

    printf("\nSUM: %d", sum);
    return 0;
}
