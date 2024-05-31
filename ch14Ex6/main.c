#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DISP(f, x) printf("sqrt(%g) = %g\n", x, f(x))
#define DISP2(f, x, y) printf("sqrt(%g) = %g, sqrt(%g) = %g\n", x, f(x), y, f(y))
#define GLUE(x, y) x##y

int main()
{
    DISP(sqrt, 81.0);
    DISP2(sqrt, 9., 81.0);
    printf("%d", GLUE(1, 2)); // ## operator is OP

    return 0;
}
