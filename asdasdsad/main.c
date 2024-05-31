#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void tribonacci(const long long signature[3], size_t n, long long s[n]);

int main()
{
    long long ex[10];
    const long long sig[3] = {0, 0, 1};

    tribonacci(sig, 10, ex);

    for(int i = 0; i < 10; i++) printf("%ld ", ex[i]);

    return 0;
}

void tribonacci(const long long signature[3], size_t n, long long s[n])
{

    if(n == 0) return;

    long long element0 = signature[0] + signature[1] + signature[2];

    s[0] = signature[0];
    s[1] = signature[1];
    s[2] = signature[2];

    s[3] = element0;

    for(unsigned int i = 4; i < n; i++) s[i] = s[i - 1] + s[i - 2] + s[i - 3];
}
