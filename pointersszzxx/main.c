#include <stdio.h>
#include <stdlib.h>
#define ROWS 5
#define COLS 3

int main()
{

    int a[ROWS][COLS] = {{1, 2, 3},
                         {1, 2, 3},
                         {1, 2, 3},
                         {6, 69, 6},
                         {0, 1, 9}};

    int i = 1; // the row to be cleared and replaced by zeros.
    int *p = a[0];

    for(; p < *(a + ROWS - 1) + COLS; p++)
        printf("%d ", *p);
    /*
    for(int *p = *(a + i); p < *(a + i) + COLS; p++) *p = 0;

    int l = 0;
    int sum = 0;
    for(int *p = a; p <= a[ROWS - 1] + COLS - 1; p++)
    {

        l++;
        printf("%d ", *p);
        if(l == COLS)
        {
            printf("\n");
            l = 0;
        }

        sum += *p;
    }

    printf("SUM: %d", sum);
    */
    return 0;
}
