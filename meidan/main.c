#include <stdio.h>
#include <stdlib.h>

int median(int x, int y, int z);

int main()
{
    printf("Median: %d", median(6, 6, 1));
    return 0;
}

int median(int x, int y, int z)
{
    int sort[3] = {x, y, z};

    for(int i = 0; i < 2; i++)
    {
        if(sort[i] > sort[i+1])
        {
            int temp = sort[i + 1];
            sort[i + 1] = sort[i];
            sort[i] = temp;
        }
    }


    return sort[1];
}
