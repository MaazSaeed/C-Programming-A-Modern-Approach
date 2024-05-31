#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MSG_LEN 10
#define FIZZ 3
#define BUZZ 5
#define RANGE 200
#define FIZZ_TEXT "Fizz"
#define BUZZ_TEXT "Buzz"

int main()
{
    for(int n = 1; n <= RANGE; n++)
    {
        char text[MSG_LEN + 1] = {0};

        if(n % FIZZ == 0) strcat(text, FIZZ_TEXT);
        if(n % BUZZ == 0) strcat(text, BUZZ_TEXT);

        if(strcmp(text, "") == 0) sprintf(text, "%d", n); // if the text array is empty put the number in it.

        printf("%s\n", text);
    }

    printf("\n");
    return 0;
}
