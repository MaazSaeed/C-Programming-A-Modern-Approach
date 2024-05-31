#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int day, month, year, day2, month2, year2;

        printf("Enter first date: ");
        scanf("%d /%d /%d", &day, &month, &year);

        printf("Enter second date: ");
        scanf("%d /%d /%d", &day2, &month2, &year2);

        if(year > year2) printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day, month, year);
        else if(year2 > year) printf("%d/%d/%d is earlier than %d/%d/%d", day, month, year, day2, month2, year2);
        else if(year == year2 && month > month2) printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day, month, year);
        else if(year == year2 && month < month2) printf("%d/%d/%d is earlier than %d/%d/%d", day, month, year, day2, month2, year2);
        else if(year == year2 && month == month2 && day > day2) printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day, month, year);
        else if(year == year2 && month == month2 && day < day2) printf("%d/%d/%d is earlier than %d/%d/%d", day, month, year, day2, month2, year2);
        else printf("SAME DATES");

        printf("\n");
    }



    return 0;
}
