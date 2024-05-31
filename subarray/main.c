#include <stdio.h>
#include <stdlib.h>

int max_sum(int *vector, int len);

int main()
{
    int intss[] = {0, 0, 0, -99, 0, -100, 1, 2, 3};

    printf("%d\n", max_sum(intss, 9));
    return 0;
}

int max_sum(int *vector, int len)
{
    int best = 0, current = 0;
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        current += *(vector + i);
        if(current < 0)
        {
            current = 0;
        }
        best = best > current ? best : current;
    }
    return best;
}
