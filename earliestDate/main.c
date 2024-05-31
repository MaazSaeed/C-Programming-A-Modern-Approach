#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ceday, cemonth, ceyear; // current earliest day, month, and year.
    int day, month, year;

    printf("Enter a date (dd/mm/yy): ");
    scanf("%d /%d /%d", &ceday, &cemonth, &ceyear);

    for(;;)
    {
        printf("Enter a date (dd/mm/yy): ");
        scanf("%d /%d /%d", &day, &month, &year);

        if(day == 0 && month == 0 && year == 0) break;

        if(year < ceyear)
        {
            ceyear = year;
            cemonth = month;
            ceday = day;
        }
        else if(year == ceyear && month < cemonth)
        {
            ceyear = year;
            cemonth = month;
            ceday = day;
        }
        else if(year == ceyear && month == cemonth && day < ceday)
        {
            ceyear = year;
            cemonth = month;
            ceday = day;
        }
        else;
    }

    printf("the earliest date: %d/%d/%d", ceday, cemonth, ceyear);

    return 0;
}
