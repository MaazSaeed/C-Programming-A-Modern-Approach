#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    char states[N][N];
    // it would be much better had I named this variable "currentChar" instead of "start".
    char start = 'A';

    srand((unsigned) time(NULL));

    // initializing the states
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            states[i][j] = '.';

    // random starting position and keeps track of the current position of the walker.
    int i = rand() % N;
    int j = rand() % N;

    states[i][j] = start;

    // random walker movement code
    for(;;)
    {
        // if the walker is cornered from all 4 sides
        if(states[i + 1][j] != '.' && states[i - 1][j] != '.' && states[i][j - 1] != '.' && states[i][j + 1] != '.' && i > 0 && i < N && j > 0 && j < N)
            break;
        // if the walker is at any of the 4 edges of the maze and cornered
        else if(states[i][j + 1] != '.' && states[i + 1][j] != '.' && i == 0 && j == 0) // top left corner
            break;
        else if(states[i][j - 1] != '.' && states[i + 1][j] != '.' && i == 0 && j == (N - 1)) // top right corner
            break;
        else if(states[i - 1][j] != '.' && states[i][j - 1] != '.' && i == (N - 1) && j == (N - 1)) // bottom right corner
            break;
        else if(states[i][j + 1] != '.' && states[i - 1][j] != '.' && i == (N - 1) && j == 0) // bottom left corner
            break;
        // if the walker is at the middle of any of the 4 sides and cornered
        else if(j == 0 && i > 0 && i < N - 1 && states[i][j + 1] != '.' && states[i - 1][j] != '.' && states[i + 1][j] != '.') // leftmost column
            break;
        else if(j == N - 1 && i > 0 && i < N - 1 && states[i][j - 1] != '.' && states[i - 1][j] != '.' && states[i + 1][j] != '.') // rightmost column
            break;
        else if(i == 0 && j > 0 && j < N - 1 && states[i][j + 1] != '.' && states[i + 1][j] != '.' && states[i][j - 1] != '.') // topmost row
            break;
        else if(i == N - 1 && j > 0 && j < N - 1 && states[i][j + 1] != '.' && states[i - 1][j] != '.' && states[i][j - 1] != '.') // bottommost row
            break;
        // end of the alphabets, ASCII code for capital 'Z' is 90
        else if(start == 'Z')
            break;
        // the walker moves as long as the above conditions fail.
        else
        {
            int move = rand() % 4;
            // code to move the walker ensuring we don't get out of bounds of the maze
            if(move == 0 && states[i][j + 1] == '.' && j + 1 < N)
            {
                states[i][j + 1] = ++start;
                j++; // right
            }
            if(move == 1 && states[i][j - 1] == '.' && j - 1 >= 0)
            {
                states[i][j - 1] = ++start;
                j--; // left
            }
            if(move == 2 && states[i - 1][j] == '.' && i - 1 >= 0)
            {
                states[i - 1][j] = ++start;
                i--; // up
            }
            if(move == 3 && states[i + 1][j] == '.' && i + 1 < N)
            {
                states[i + 1][j] = ++start;
                i++; // down
            }
        }
    }
    // Drawing the maze
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            printf("%c ", states[i][j]);
        printf("\n");
    }

    return 0;
}
