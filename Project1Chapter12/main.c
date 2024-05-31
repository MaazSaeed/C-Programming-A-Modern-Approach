#include <stdio.h>
#include <stdlib.h>
#define N 100 // Maximum allowed length of a message

int main()
{
    char chars[N];
    char c;

    printf("Enter a message: ");
    int i = 0;
    while((c = getchar()) != '\n' && i < N) *(chars + i++) = c;

    printf("Reversal is: ");
    for(char *x = &chars[i - 1]; x >= chars; x--) printf("%c", *x);

    return 0;
}
