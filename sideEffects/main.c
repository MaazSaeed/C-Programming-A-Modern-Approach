#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3];
    int b[3] = {2, 3, 4};

    int i = 0;
    while(i < 3) a[i] = b[i++];

    i = 0;
    while(i < 3) printf("%d ", a[i++]);
    // the program won't do what its expected to do ....
    // C is awesome btw!!!

    return 0;
}
