#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter a limit on the maximum square: ");
    scanf("%d", &n);
    // prints square of even number between 1 and maximum limit square
    for(int i = 2; i * i <= n; i += 2)
    {
        printf("%d\n", i * i);
    }

    return 0;
}
