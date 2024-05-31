#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;
    char encrypt[80] = {' '};
    int shiftAm;

    printf("Enter a message to encrypt: ");

    int y = 0;
    while( (ch = getchar()) != '\n')
    {
        encrypt[y] = ch;
        y++;
    }

    printf("Enter shift amount(1-25): ");
    scanf("%d", &shiftAm);

    for(int c = 0; c < 80; c++)
    {
        char a = encrypt[c];
        if( a != ' ' && a >= 97 && a != '.' && a != ',')
            encrypt[c] = ((a - 'a') + shiftAm) % 26 + 'a';
        else if( a != ' ')
            encrypt[c] = ((a - 'A') + shiftAm) % 26 + 'A';
        else;
    }

    printf("Encrypted Message: ");

    for(int c = 0; c < 80; c++)
    {
        char a = encrypt[c];
        printf("%c", a);

    }

    return 0;
}
