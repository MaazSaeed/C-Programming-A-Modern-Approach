#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ull;

unsigned long long* productFib(ull prod);

int main()
{
    ull *p = productFib(74049690);

    printf("%llu, %llu, %llu", p[0], p[1], p[2]);
    return 0;
}
unsigned long long* productFib(ull prod)
 {
  ull t1 = 0;
  ull t2 = 1;
  ull t3;

  ull i = 1;

  int found = 0;

  for(; i < prod; i++)
  {

      t3 = t2 + t1;

      if(prod / t2 == t3 && prod % t2 == 0)
      {
        found = 1;
        break;
      }

      if(t2 * t3 > prod) break;

      t1 = t2;
      t2 = t3;
  }

  ull t_f = 0;
  if(found) t_f = 1;

  ull *numbers = malloc(3 * sizeof(ull));

  numbers[0] = t2;
  numbers[1] = t3;
  numbers[2] = t_f;

  return numbers;
}
