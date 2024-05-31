#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<time.h>

int main()
{
    const char char_hex[] = {'0', 'A', 'B', 'C'};

    char_hex[1] = 'E';

    for(int i = 0; i < sizeof(char_hex) / sizeof(char_hex[0]); i++) printf("%c ", char_hex[i]);

    return 0;
}
