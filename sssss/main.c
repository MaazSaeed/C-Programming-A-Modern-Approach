#include <stdio.h>
#include <stdlib.h>

void print(int x);
void print(char y);

int main()
{
    print(2);
    print('2');
    return 0;
}

void print(int x)
{
    printf("x: %d", x);
}

void print(char y)
{
    printf("y: %c", y);
}
