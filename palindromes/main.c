#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MSG_LEN 100

int main()
{
    char msg[MSG_LEN] = {' '};
    char c;
    char *p = msg;
    int palindrome = 1;

    printf("Enter a message: ");

    int i = 0;
    while((c = getchar()) != '\n')
    {
        c = tolower(c);
        if(c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
        {
            *p++ = c;
            i++;
        }
    }

    char *q = msg;

    for(p = &msg[i-1]; p >= msg; p--, q++)
    {
        if(*q != *p)
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome) printf("Palindrome!");
    else printf("NOT palindrome!");

    return 0;
}
