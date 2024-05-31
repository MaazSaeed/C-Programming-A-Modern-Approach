#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t countBits(unsigned value);

int main()
{
    printf("%d", countBits(12));
    return 0;
}

size_t countBits(unsigned value)
{
  static size_t total_bits = 0;

  unsigned value_copy = value; // creating a copy of the argument passed into the function

  while(value_copy > 0)
  {
    if(value_copy % 2 == 1) total_bits++;
    value_copy /= 2;
  }

  return total_bits;
}

