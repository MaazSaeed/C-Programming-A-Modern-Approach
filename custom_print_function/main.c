#include <stdio.h>
#include <stdlib.h>

void printc(char *str); // custom print function..!!

int main()
{
    char name[] = {'M','A','A','A','Z', '\0'};
    printc(name);
    return 0;
}

void printc(char *str)
{
    while(*str)
    {
        putchar(*str);
        str++;
    }

}

