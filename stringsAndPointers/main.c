#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "abc";

    char *p = "ABC";
    p = "abX";

    char str1[] = "Strings in C do really suck!! but I hope C in general doesn't suck!! eyeye .";
    char str2[sizeof(str1)/sizeof(str1[0])+ 1];
    char *x = "xyz"; // string literal

    // strcpy(x, str1); // can not modify string literal
    strcat(str, "def");



    printf("%s\n", str);
    //printf("%c", p[2]); // gimme the damn 3rd character in the string.

    return 0;
}
