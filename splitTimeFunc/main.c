#include <stdio.h>
#include <stdlib.h>

void SplitTime(long totalSeconds, int *hours, int *minutes, int *seconds);

int main()
{
    for(;;)
    {
        long totalSeconds;
        int hours, minutes, seconds;

        printf("Enter total seconds: ");
        scanf("%ld", &totalSeconds);

        SplitTime(totalSeconds, &hours, &minutes, &seconds);
        printf("%d h: %d m: %d s", hours, minutes, seconds);

        printf("\n");
    }

    return 0;
}

void SplitTime(long totalSeconds, int *hours, int *minutes, int *seconds)
{
    long temp = totalSeconds;

    *seconds = temp % 60;
    temp /= 60;

    *minutes = temp % 60;
    temp /= 60;

    *hours = temp % 60;
}
