#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int vowels = 0;
    char ch;

    printf("Enter a message: ");
    ch = toupper(getchar());

    while(ch != '\n')
    {
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') vowels++;
        ch = toupper(getchar());
    }

    printf("VOWELS: %d\n", vowels);

    return 0;
}
