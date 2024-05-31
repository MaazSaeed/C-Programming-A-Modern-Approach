#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    for(;;)
    {
        int len = 0;
        char c;

        printf("Enter a message: ");
        while(getchar() != '\n') len++;
        printf("The text is %d characters long.\n", len);
    }


    return 0;
}
