#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{

    int hours, minutes;
    char a, b;
    char c = 'p';

    for(;;)
    {
        printf("Enter a 12 hour time: ");
        scanf("%d:%d %c%c", &hours, &minutes, &a, &b);

        if(a == 'p' || a == 'P') hours += 12;

        printf("24 hour time: %2.2d:%2.2d\n", hours, minutes);
    }

    return 0;
}
