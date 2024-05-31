#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    double ident[N][N];
    int row, col;

    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            if(row == col) ident[row][col] = 1.00;
            else ident[row][col] = 0.00;
        }
    }

    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            printf("%4.2f ", ident[row][col]);
        }
        printf("\n");
    }


    return 0;
}
