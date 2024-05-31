#include <stdio.h>
#include <stdlib.h>

int digital_root(int n);

int main()
{
    printf("%d", digital_root(942));

    return 0;
}
int digital_root(int n)
{
    if(n / 10 == 0) return n;
    return digital_root(n % 10 + digital_root(n / 10));
}
