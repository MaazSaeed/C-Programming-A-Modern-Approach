#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(;;)
    {
        int userInput;
        int digits = 0;

        printf("Enter a positive integer number: ");
        scanf("%d", &userInput);

        do
        {
            userInput /= 10;
            ++digits;
        } while(userInput > 0);

        printf("Total digits: %d\n", digits);
    }


    return 0;
}
