#include <stdio.h>
#include <stdlib.h>

int next_prime(int previous_prime);
char* factors(int lst);

int main()
{
    printf("%s\n", factors(7919));
    return 0;
}

char* factors(int lst)
{

  static char decomposed_num[40];

  int val = 1;

  while(lst != 1)
  {
    int current_prime = next_prime(val);
    int current_count = 0;

    if(lst % current_prime != 0)
    {
      val++;
      continue;
    }

    while(lst % current_prime == 0)
    {
      current_count++;
      lst /= current_prime;
    }

    strcat(decomposed_num, "(");
    char number[20];
    itoa(current_prime, number, 10);
    strcat(decomposed_num, number);

    if(current_count > 1)
    {
      strcat(decomposed_num, "**");
      char count[3];
      itoa(current_count, count, 10);
      strcat(decomposed_num, count);
      strcat(decomposed_num, ")");
    }
    else strcat(decomposed_num, ")");
  }

  return decomposed_num;

}

int next_prime(int previous_prime)
{
    int next_prime_num = previous_prime + 1;

    for(int i = 2; i < next_prime_num; i++)
    {
      if(next_prime_num % i == 0) // you have 1 factor other than 1 and yourself, goodbye buddy!!
      {
        next_prime_num++;
        i = 2; // resetting back for the next number
      }
    }

    return next_prime_num;
}
