#include <stdio.h>
#include <stdlib.h>

char *strsum(const char *a, const char *b);

int main()
{
    printf("Hello world!\n");
    return 0;
}

char *strsum(const char *a, const char *b)
{
  unsigned long long combined_len = strlen(a) + strlen(b);

  char *sum = malloc(combined_len * sizeof(char));

  // first string summation
    char *p = a + strlen(a) - 1;
    unsigned long long place_a = 1;
    unsigned long long total_a = 0;

    for(; p >= a ; p--)
    {
      unsigned long long curr = (*p - '0') * place_a;
      total_a += curr;
      place_a *= 10;
    }

  // second string summation
    char *q = b + strlen(b) - 1;

     unsigned long long place_b = 1;
     unsigned long long total_b = 0;

    for(; q >= b; q--)
    {
      unsigned long long curr = (*q - '0') * place_b;
      total_b += curr;
      place_b *= 10;
    }

    sprintf(sum, "%llu", total_a + total_b);

    return sum;
}
