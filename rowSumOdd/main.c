#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

uint64_t rowSumOddNumbers(uint32_t n);

int main()
{
    int row = rowSumOddNumbers(10100);
    printf("%d ", row);
    return 0;
}

uint64_t rowSumOddNumbers(uint32_t n)
{

    uint64_t sum = 0;
    uint64_t initial_e = (n * n) - (n - 1);

    sum += initial_e;

    for(uint64_t i = 0; i < n - 1; i++)
    {
      initial_e += 2;
      sum += initial_e;
    }

    return sum;
}
