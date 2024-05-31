#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        // the program calculates the bill to pay in discrete values of $20, $10, $5, $1.
        int userInput; // total amount user inputs

        printf("Enter an amount: ");
        scanf("%d", &userInput);

        printf("$20 bills: %d\n", userInput / 20);

        int amountLeft_10 = userInput - (20 * (userInput / 20)); // the amount if any left the user has to pay using $10 bill

        printf("$10 bills: %d\n", amountLeft_10 / 10);

        int amountLeft_5 = amountLeft_10 - ( 10 * (amountLeft_10 / 10));

        printf("$5 bills: %d\n", amountLeft_5 / 5);

        int amountLeft_1 = amountLeft_5 - (5 * (amountLeft_5 / 5));

        printf("$1 bills: %d\n", amountLeft_1);

        printf("TOTAL SUM : ");
        printf("20 x %d + 10 x %d + 5 x %d + 1 x %d = %d\n\n", userInput / 20, amountLeft_10 / 10, amountLeft_5 / 5, amountLeft_1, userInput / 20 * 20 + amountLeft_10 / 10 * 10+ amountLeft_5 / 5 * 5 + amountLeft_1 );
    }

    return 0;
}
