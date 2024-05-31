#include <stdio.h>
#include <stdlib.h>

////////////////////////////////// PRINTS A ONE MONTH "CALENDAR"///////////////////////////////////////////////////
int main()
{
    for(;;)
    {
        int daysOfMonth, startingDay;

        printf("Enter number of days in the month: ");
        scanf("%d", &daysOfMonth);
        printf("Enter starting day of the week (1 = sunday, 7 = saturday): ");
        scanf("%d", &startingDay);
        printf("\n");

        printf(" Su Mo Tu We Th Fr Sa\n");

        // much more efficient way of starting from certain day would be
        for(int i = 1; i < startingDay; i++) printf("   ");

        for(int i = 1; i <= daysOfMonth; i++)
        {
            printf("%3d", i);
            if(startingDay % 7 == 0)
            {
                printf("\n");
            }
            startingDay++;
        }
        printf("\n\n");
    }

    return 0;
}
