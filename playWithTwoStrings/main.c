#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>

char *work_on_strings(const char *a_c, const char *b_c);

int main()
{
    const char a[] = "abab";
    const char b[] = "bababa";

    printf("%s", work_on_strings(a, b));
    return 0;
}


char *work_on_strings(const char *a_c, const char *b_c)
{

  size_t a_l = strlen(a_c);
  size_t b_l = strlen(b_c);

  size_t n = a_l + b_l + 1; // length of the resulting string

  char *combined_string = malloc(n * sizeof(char));

  char a[a_l + 1];
  char b[b_l + 1];

  memcpy(a, a_c, a_l + 1);
  memcpy(b, b_c, b_l + 1);

  a[a_l] = '\0';
  b[b_l] = '\0';

  // making a copy of the two pointers
  char *a_p = a;

  char *b_p = b;

  for(;*a_p; a_p++)
  {

    for(;*b_p; b_p++)
    {
      if(tolower(*b_p) == tolower(*a_p))
      {
        if(isupper(*b_p)) *b_p = tolower(*b_p);
        else *b_p = toupper(*b_p);
      }
    }

    b_p = b; // resetting the pointer back to start of string "b"
  }

  b_p = b;
  a_p = a;

  for(;*b_p; b_p++)
  {
      for(;*a_p; a_p++)
    {
      if(tolower(*b_p) == tolower(*a_p))
      {
        if(isupper(*a_p)) *a_p = tolower(*a_p);
        else *a_p = toupper(*a_p);
      }
    }
    a_p = a; // resetting the pointer back to start of string "b"
  }

  strcpy(combined_string, strcat(a, b));

  return combined_string;

}
