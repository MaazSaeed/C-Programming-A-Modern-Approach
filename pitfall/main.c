#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2, 3, 6, 0};
    int *p = a;
    int i = 0;

    while(*(a + i) != 0)
        {printf("%d ", *(a + i)); i++;}

    return 0;
}
