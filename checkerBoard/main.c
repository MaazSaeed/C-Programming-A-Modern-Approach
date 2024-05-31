#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char checker_board[8][8] = {' '};
    int r, c;

    for(r = 0; r < sizeof(checker_board) / sizeof(checker_board[0]); r++)
    {
        for(c = 0; c < sizeof(checker_board) / sizeof(checker_board[0]); c++)
        {
            if( (r + 1 + c) % 2 == 0) checker_board[r][c] = 'R';
            else checker_board[r][c] = 'B';
        }
    }

    for(r = 0; r < sizeof(checker_board) / sizeof(checker_board[0]); r++)
    {
        for(c = 0; c < sizeof(checker_board) / sizeof(checker_board[0]); c++)
        {
            printf("%c ", checker_board[r][c]);
        }
        printf("\n");
    }

    return 0;
}
