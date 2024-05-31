#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long next_bigger_number(long long n);

int main()
{
    long long lll = 1000;
    printf("%lld", next_bigger_number(6575947294194426520));

    //printf("%lld", lll);
    return 0;
}

long long next_bigger_number(long long n) {


  int length = 0;
  long long n_copy = n;
  long long n_copy2 = n;

  for(;n_copy > 0;)
  {
    length++;
    n_copy /= 10;
  }

  //printf("%d\n", length);
  if(length == 1 || length == 0) return -1;

  char *number_to_str = malloc( (length) * sizeof(char));

  number_to_str[length] = 0;

  for(int i = length - 1; i >= 0; i--)
  {
    number_to_str[i] = n % 10 + '0';
    n /= 10;
  }

    //printf("%s", number_to_str);

  for(int i = 1; i < length; i++)
  {
    if(number_to_str[length - i] > number_to_str[length - (i + 1)])
    {
      char copy = number_to_str[length - (i + 1)];
      number_to_str[length - (i + 1)] = number_to_str[length - i];
      number_to_str[length - i] = copy;

      //long long next_g_number = (long) atoi(number_to_str);
      long long next_g_number;
      sscanf (number_to_str,"%lld", &next_g_number);
      return next_g_number;
    }
  }
    return n_copy2;
}
