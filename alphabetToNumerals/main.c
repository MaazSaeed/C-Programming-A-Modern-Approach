#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    printf("Enter phone number # ");

    for(;;)
    {
        switch(toupper(getchar()))
        {
            case 'A': putchar('2'); break;
            case 'B': putchar('2'); break;
            case 'C': putchar('2'); break;

            case 'D': putchar('3'); break;
            case 'E': putchar('3'); break;
            case 'F': putchar('3'); break;

            case 'G': putchar('4'); break;
            case 'H': putchar('4'); break;
            case 'I': putchar('4'); break;

            case 'J': putchar('5'); break;
            case 'K': putchar('5'); break;
            case 'L': putchar('5'); break;

            case 'M': putchar('6'); break;
            case 'N': putchar('6'); break;
            case 'O': putchar('6'); break;

            case 'P': putchar('7'); break;
            case 'Q': putchar('7'); break;
            case 'R': putchar('7'); break;

            case 'S': putchar('8'); break;
            case 'T': putchar('8'); break;
            case 'U': putchar('8'); break;

            case 'V': putchar('9'); break;
            case 'W': putchar('9'); break;
            case 'X': putchar('9'); break;

            case ' ': putchar(' '); break;
            case '-': putchar('-'); break;

            case '0': putchar('0'); break;
            case '1': putchar('1'); break;
            case '2': putchar('2'); break;

            case '3': putchar('3'); break;
            case '4': putchar('4'); break;
            case '5': putchar('5'); break;

            case '6': putchar('6'); break;
            case '7': putchar('7'); break;
            case '8': putchar('8'); break;
            case '9': putchar('9'); break;
        }
    }


    return 0;
}
