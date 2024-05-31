#include <stdio.h>
#include <stdlib.h>

int GCD(int *num, int *denom);

int main()
{
    int num, denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    int gcd = GCD(&num, &denom);

    //num /= gcd;
    //denom /= gcd;
    //printf("Reduced form: %d/%d", num, denom);
    printf("GCD %d", gcd);
    return 0;
}

int GCD(int *num, int *denom)
{
    int max, min;

    if(*num > *denom)
    {
        max = *num;
        min = *denom;
    }
    else
    {
        max = *denom;
        min = *num;
    }

    int r = max % min;

    int nM = r;

    while(nM != 0)
    {
        r = min % r;
        min = nM;
    }

    return r;
}
