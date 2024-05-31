#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[5];

    printf("Enter a message: ");
    int length = ReadLine(str, 5);
    //printf(" length: %d\n", length);
    printf("null: %c", str[3]);

    return 0;
}

int ReadLine(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < n - 1) str[i++] = ch;
        str[i] = '\0'; // adding a null character to ensure the end of string
    }

    return i;
}
