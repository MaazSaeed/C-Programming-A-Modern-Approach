#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float x, y;

    scanf("%d%d%f%f", &i, &j, &x, &y);
    printf("%d %d %0.1f %0.1f", i, j, x, y);

    return 0;
}
