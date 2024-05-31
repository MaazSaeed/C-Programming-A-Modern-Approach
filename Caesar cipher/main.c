#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void encrypt(char *message, int shift_amount);
void decrypt(char *message, int key);

int main()
{

    char locked[] = "MAaz";

    encrypt(locked, 3);

    printf("%s\n", locked);

    decrypt(locked, 3);

    printf("%s\n", locked);

    return 0;
}

void encrypt(char *message, int shift_amount)
{
    for(;*message; message++)
    {
        if(islower(*message))
            *message = (*message - 'a' + shift_amount) % 26 + 'a';
        else
            *message = (*message - 'A' + shift_amount) % 26 + 'A';
    }
}

void decrypt(char *message, int key)
{
    for(;*message; message++)
    {
        if(islower(*message))
            *message = (*message - 'a' ) % 'z' ;
        else
            *message = *message - key;
    }
}

