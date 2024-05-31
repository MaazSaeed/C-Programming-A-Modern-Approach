#include <stdio.h>
#include <stdlib.h>

int median(int x, int y, int z);

int main()
{
    printf("median %d", median(3, 2, 1));
    return 0;
}

int median(int x, int y, int z)
{
  double result;

  if (x <= y)
    if (y <= z) result = y;
    else if (x <= z) result = z;
    else result = x;
  else {
    if (z <= y) result = y;
    else if (x <= z) result = x;
    else result = z;
  }

  return result;
}

