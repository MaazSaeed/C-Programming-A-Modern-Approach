#include <stdio.h>
#include <stdlib.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

GENERIC_MAX(float);
GENERIC_MAX(int);

int main()
{
    float z = float_max(3.1f, 4.6f);
    int x = int_max(2, 1);

    printf("x:%d z:%.2f", x, z);
    printf("\n");

    return 0;
}
