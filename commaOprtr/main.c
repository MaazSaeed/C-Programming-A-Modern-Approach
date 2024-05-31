#include <stdio.h>
#include <stdlib.h>

int main()
{
    // creating an infinte loop using goto statement...

    come_back: printf("Back");
    done: goto come_back;

    return 0;
}
