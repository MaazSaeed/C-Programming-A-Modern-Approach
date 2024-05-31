#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uI;
    int sum = 0;

    printf("Enter numbers  to add their sum, Enter (0) to see the result.");
    printf("\n");
    for(;;)
    {
        printf("Enter a number: ");
        scanf("%d", &uI);
        if(uI == 0) goto sum;
        sum += uI;
    }

    sum:
        printf("------------------------------------------------------------\n");
        printf("Your last number was \"0\" SUM OF THE NUMBERS ENTERED: %d", sum);

    return 0;
}
