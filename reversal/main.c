#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int r;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        r *= 10;
        r += n % 10;
        n /= 10;

    }while(n > 0);

    printf("reversal: %d", r);
    return 0;
}
