#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    int scrabbleValue = 0;
    int result = 1;

    printf("Enter a word: ");
    for(;;)
    {

        switch(toupper(getchar()))
        {
            case 'D': case 'G': scrabbleValue += 2; break;

            case 'B': case 'C': case 'M': case 'P': scrabbleValue += 3; break;

            case 'F': case 'H': case 'V': case 'W': case 'Y': scrabbleValue += 4; break;

            case 'K': scrabbleValue += 5; break;

            case 'J': case 'X': scrabbleValue += 8; break;

            case 'Q': case 'Z': scrabbleValue += 10; break;

            case '\n': result = 0; break;

            default : scrabbleValue++; break; // all other characters except the above mentioned have the value of '1' including space bar presses ' '
        }

        if(result == 0)
        {
            printf("scrabble value: %d\n", scrabbleValue);
            scrabbleValue = 0; // restting the value to 0 for replay, NOT resetting the value will result in accumulation.
            result = 1;
            printf("\nEnter a word: ");
        }
    }

    return 0;
}
