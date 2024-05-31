#include <stdio.h>
#include <stdlib.h>

double innerProduct(double a[], double b[], int n);

int main()
{
    double a[] = {10, 20, 30};
    double b[] = {10, 20, 30};

    printf("inner prodct: %.1lf", innerProduct(a, b, 3));
    return 0;
}

double innerProduct(double a[], double b[], int n)
{
    double product;

    for(int i = 0; i < n; i++) product += a[i] * b[i];

    return product;
}
