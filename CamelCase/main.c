#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *camel_case(const char *s);

int main()
{
    printf("%s", camel_case("camelcase"));
    return 0;
}



char *camel_case(const char *s)
{
    int stop = 1;

    int i = 0;
    int len = strlen(s);
    char *camel_case = malloc((len) * sizeof(char));

    for(;*s; s++)
    {
        if(*s == ' ')
        {
            stop = 1;
            continue;
        }

        else if(stop)
        {
            camel_case[i] = *s - 'a' + 'A';
             stop = 0;
             i++;
        }
        else
        {
            camel_case[i] = *s;
            i++;
        }
    }
    camel_case[i] = '\0';

    return camel_case;
}
