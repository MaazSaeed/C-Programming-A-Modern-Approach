#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, x, y;
    int max;
    int min;

    printf("Enter 4 integers with spaces in between them: ");
    scanf("%d %d %d %d", &i, &j, &x, &y);

    if(i > j && i > x && i > y) max = i;
    else if(j > i && j > x && j > y) max = j;
    else if(y > i && y > x && y > j) max = y;
    else max = x;

    if(i < j && i < x && i < y) min = i;
    else if(j < i && j < x && j < y) min = j;
    else if(y < i && y < x && y < j) min = y;
    else min = x;

    printf("MINIMUM : %d \nMAXIMUM: %d", min, max);

    return 0;
}
