#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_equals(char *a, const char *p);
void string_to_upper(char str[]);

int main(int argc, char *argv[])
{
    // string literals are mostly stored in read only memory area, attempting to modify might crash the program.
    char p[] = "abc";
    char q[] = "xxzs";


    //char *x = "sdfafd";
    // *(x + 1) = 'f'; // cannot be modified as the string literal is stored in read only memory area

    string_to_upper(p);
    string_to_upper(q);

    printf("p: %s\n", p);
    printf("q: %s\n", q);

    return 0;
}

int string_equals(char *a, const char *p)
{
    for(int i = 0; toupper(p[i]) == toupper(a[i]); i++)
        if(p[i] == '\0') return 1;

    return 0;
}

void string_to_upper(char *str)
{
    while(*str) *str++ = toupper(*str); //- 'a' + 'A';
}

