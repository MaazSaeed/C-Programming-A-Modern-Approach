#include <stdio.h>
#include <stdlib.h>

int count_spaces(const char *s);

int main()
{
    char s[] = " he l l o ";

    printf("spaces: %d", count_spaces(s));
    return 0;
}

int count_spaces(const char *s)
{
    int count = 0;

    while(*s) if(*s++ == ' ') count++;
    return count;
}
