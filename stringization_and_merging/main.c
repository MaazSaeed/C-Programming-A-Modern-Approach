#include <stdio.h>
#include <stdlib.h>

#define STRINGIZE(x, y, z) #x#y#z
#define ADD3(x, y) STRINGIZE(x, y, 3)

int main()
{
    printf("%s", ADD3(1, 2));
    // so macros are really powerful but you gotta handle them carefully
    // as with great powers comes great responsibilities... GGs buddy!

    return 0;
}
