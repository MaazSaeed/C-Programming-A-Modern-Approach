#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows_cols[5][5];
    int rowS = 0, colS = 0; // row sum and col sum

    for(int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for(int j = 0; j < 5; j++)
        {
            int n;
            scanf("%d", &n);
            rows_cols[i][j] = n;
        }
    }

    printf("\nROW TOTALS: ");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            rowS += rows_cols[i][j];
        }
        printf("%3d ", rowS);
        rowS = 0;
    }

    printf("\nCOL TOTALS: ");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            colS += rows_cols[j][i];
        }
        printf("%3d ", colS);
        colS = 0;
    }

    return 0;
}
