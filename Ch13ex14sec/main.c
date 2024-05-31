#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[] = "Nvtubgb", *p;

    for(p = s; *p; p++) --*p;
    puts(s);

    return 0;
}
