#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
typedef int bool;

int main()
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit]) break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if(n > 0) printf("repeated digit.");
    else printf("No repeating digit");

    return 0;
}
