#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char ch;
    char initialL;
    int flag = 0;

    printf("Enter your name: ");
    ch = getchar();

    while(ch != '\n')
    {
        if(ch != ' ' && flag == 0) {initialL = ch; flag = 1;};

        ch = getchar();

        if(ch == ' ' && flag == 1)
        {
            ch = getchar();
            do
            {
                if(ch != ' ')putchar(ch);
                ch = getchar();
            } while(ch != '\n');
        }
    }

    printf(", %c", initialL);


    return 0;
}
