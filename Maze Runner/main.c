#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 7

// function prototype
char *maze_runner(size_t n, const int maze[n][n], const char *directions);

int main()
{
    const int maze[N][N] = { {1, 1, 1, 1, 3, 0, 0},   // 2 indicates the runner
                             {1, 0, 0, 0, 0, 0, 0},   // 3 indicates the exit point i.e exiting out of the maze
                             {1, 0, 0, 0, 0, 0, 0},   // 1 indicates a wall, hence hitting the wall kills the runner
                             {0, 0, 1, 0, 0, 0, 0},   // 0 indicates the free path that runner can take
                             {1, 0, 1, 0, 1, 0, 0},
                             {1, 0, 0, 0, 0, 0, 0},
                             {0, 2, 1, 0, 1, 0, 0} };

    printf("%s", maze_runner(N, maze, "abcNNNNNEExxEN"));
    printf("\n");

    return 0;
}

char *maze_runner(size_t n, const int maze[n][n], const char *directions)
{
   int x; // the starting x and y co-ordinates
   int y;
   bool breakout = false;

   // locates the runner's position in the maze (x, y)
   for(size_t i = 0; i < n; i++)
   {
     for(size_t j = 0; j < n; j++)
     {
       if(maze[i][j] == 2)
       {
          x = i;
          y = j;
          breakout = true; // once we find the starting location of our runner we wanna exit both the loops that is why this breakout variable exists
          break; // this break statement takes the control out of the "j" loop
       }
     }
     if(breakout) break; // if breakout is set to true then this break statement takes the control out of the "i" loop
   }
   // Runner's journey begins here!!
   for(;*directions; directions++)
   {
        switch(*directions)
        {
            case 'N' : x--; break;
            case 'S' : x++; break;
            case 'E' : y++; break;
            case 'W' : y--; break;
            default : break; // ignore all other characters
        }

        if(x >= n || x < 0 || y >= n || y < 0) return "Out of Bounds"; // fell off map, that is the maze!!
        if(maze[x][y] == 1) return "Died!!"; // landing on 1 kills the runner!!
        if(maze[x][y] == 3) return "Exfiltrated the dangerzone!!! Congrats!!"; // landing on three indicates exit point!
   }

    return "lost"; // indicates that the runner with given directions still could NOT exfiltrate the danger zone and hence is lost..!!
}
