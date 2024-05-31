#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 5;
    int *p, *q;

    q = &i;

    p = *&q; // the & operators returns the address of the pointer 'q' and the indirection operator '*' returns the content stored in pointer q which is the address of var i
            // so p is a pointer to i

    printf("p: %p", q);

    return 0;
}
