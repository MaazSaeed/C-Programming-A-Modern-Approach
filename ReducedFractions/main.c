#include <stdio.h>
#include <stdlib.h>

void reduce(int *num, int *denom);

int main()
{
    for(;;)
    {
        int num, denom;
        printf("Enter a fraction: ");
        scanf("%d/%d", &num, &denom);
        reduce(&num, &denom);

        if(denom == 1) printf("Reduced Form: %d\n", num);
        else printf("Reduced Form: %d/%d\n", num, denom);
    }

    return 0;
}

void reduce(int *num, int *denom)
{
    int max;

    if(*num > *denom) max = *denom;
    else max = *num;

    for(;max >= 2; max--)
    {
        if(*num % max == 0 && *denom % max == 0)
        {
            *num /= max;
            *denom /= max;
        }
    }
}
