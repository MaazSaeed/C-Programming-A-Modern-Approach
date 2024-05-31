#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[25];
    char s2[25];

    strcpy(s1, "computer");
    strcpy(s2, "science");


    if(strcmp(s1, s2) < 0) strcat(s1, s2); // strcmp() does lexicographical comparison e.g 's' comes after 'c' there by c is less than s hence the expression evaluates to less than 0
    else strcat(s2, s1);

    s1[strlen(s1) - 6] = '\0';

    printf("%s", s1); // prints computers

    return 0;
}
