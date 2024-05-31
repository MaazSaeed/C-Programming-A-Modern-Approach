#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%6d,%4d", 86, 1040);
    printf("\n");
    printf("%10.5e", 30.253);
    printf("\n");
    printf("%.4f", 83.162);
    printf("\n");
    printf("%-6.2e", .0000009979);

    printf("\n");
    int i, j;
    float x;
    scanf("%d %f %f", &i, &x, &j);

    printf("%d %d %f", i, j, x);
    return 0;
}
