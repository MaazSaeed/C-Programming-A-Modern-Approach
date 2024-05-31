#include <stdio.h>
#include <stdlib.h>

int hasZero(int a[], int n);

int main()
{
    int n[] = {1, 2, 3, -4, 5, 6};

    if(hasZero(n, 6)) printf("Has a 0");
    else printf("No zeros in the numbers.");

    return 0;
}


int hasZero(int a[], int n)
{
    for(int i = 0; i < n; i++) if(a[i] == 0) return 1;
    return 0;
}
