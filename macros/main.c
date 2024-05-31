#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_INT(n) printf(#n " = %d", n) // the '#' operator converts the macro argument into a string literal.
#define ID(n) i##n

#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

// creating functions for finding largest amongst two numbers for different types
GENERIC_MAX(float);
GENERIC_MAX(int);

int main()
{
    //int i = 3, j = 2;
    //PRINT_INT(i/j);

    printf("%.1f", float_max(3.1f, 2.0f));
    return 0;
}

