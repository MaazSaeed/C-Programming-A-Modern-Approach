#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib_numbers[40] = {0, 1};
    int i;

    for(i = 2; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++) fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    for(i = 0; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++) printf("%d\n", fib_numbers[i]);


    return 0;
}
