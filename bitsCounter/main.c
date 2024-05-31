#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void bits(unsigned value, size_t *total_bits);
size_t countBits(unsigned value, size_t *total_bits);

int main()
{
    size_t bits = 0;

    countBits(1234, &bits);

    printf("%d", bits);

    return 0;
}

size_t countBits(unsigned value, size_t *total_bits)
{
  //static size_t total_bits = 0;

  bits(value, &total_bits);

  return total_bits;
}

void bits(unsigned value, size_t *total_bits)
{
  if(value != 0)
  {
    bits(value/2, &total_bits);
    if(value % 2 != 0) ++*total_bits;
  }
}
