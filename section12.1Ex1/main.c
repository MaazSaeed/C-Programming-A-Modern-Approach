#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};

    int *p = &a[1], *q = &a[5];

    printf("a: %d\n", *(p + 3)); // prints 14
    printf("b: %d\n", *(q - 3)); // prints 34
    printf("c: %d\n", q - p);    // prints 4
    printf("d: %d\n", p < q);    // prints 1
    printf("e: %d\n", *p < *q);  // prints 0

    return 0;
}
