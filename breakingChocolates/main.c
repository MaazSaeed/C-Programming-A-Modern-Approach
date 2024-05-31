#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t breaking_chocolate(uint32_t n, uint32_t m);

int main()
{
    return 0;
}


uint32_t breaking_chocolate(uint32_t n, uint32_t m)
{
  return m && n? m * n - 1;
}
