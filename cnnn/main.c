#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}


bool scramble(const char *str1, const char *str2)
{
  int str2_length = strlen(str2);
  int alphabets[26] = {0};

  bool contains = true;

  while(*str2)
  {
    alphabets[*str2 - 'a']++;
    str2++;
  }

  while(*str1)
  {
    alphabets[*str1 - 'a']--;
    str1++;
  }

  for(int i = 0 ; i < 26; i++)
  {
    if(alphabets[i] > 0)
    {
      contains = 0
      break;
    }
  }

   if(contains) return true;

    return false;

}
