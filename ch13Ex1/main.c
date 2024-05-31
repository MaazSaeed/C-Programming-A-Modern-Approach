#include <stdio.h>
#include <stdlib.h>

#define MSG_LEN 20

void read_line(char *str, int n);
void read_line1(char *str, int n);

int main()
{
    char str[MSG_LEN + 1];

    read_line(str, MSG_LEN);
    censor(str);
    printf("%s", str);

    return 0;
}

// skip white-spaces before the string function.
void read_line(char *str, int n)
{
    int ch, i = 0;

    while((ch = getchar()) == ' '); // ignore the initial white-spaces before the string.

    *str++ = ch;
    i++;

    while((ch = getchar()) != '\n' && i++ < n) *str++ = ch;
    *str = '\0'; // store a null character at the end of the string.
}

// stop storing input if a white space is encountered.
void read_line1(char *str, int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(ch == ' ') break;
        else if(i++ < n) *str++ = ch;
    }

    *str = '\0'; // store a null character at the end of the string.
}

void censor(char *str)
{
    while(*str)
    {
        if(*str == 'f' && *(str + 1) == 'o' && *(str + 2) == 'o')
        {
            *str = *(str + 1) = *(str + 2) = 'x';
            str += 2;
        }
        str++;
    }
}

