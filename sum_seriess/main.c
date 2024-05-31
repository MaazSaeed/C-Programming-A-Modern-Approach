#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *series_sum(const size_t n);

int main()
{

    printf("buffer is: %s\n", series_sum(350));

    return 0;
}


char *series_sum(const size_t n)
{
  double sum = 1;

  static char series[5];

  if(n == 0)
  {
    strcpy(series, "0.00");
    return series;
  }

  if(n == 1)
  {
    strcpy(series, "1.00");
    return series;
  }

  int i = 1;

  double denom = 4;

  while(i < n)
  {
    sum += (1/denom);
    denom += 3;
    i++;
  }

  gcvt(sum, 3, series);

  if(series[3] == '\0')
  {
   series[3] = '0';
   series[4] = '\0';
  }


  if(series[2] == '\0')
  {
   series[2] = '0';
   series[3] = '0';
   series[4] = '\0';
  }

  return series;
}
