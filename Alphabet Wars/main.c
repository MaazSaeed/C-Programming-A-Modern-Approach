#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char * alphabet_war(const char * battlefield);

int main()
{
    printf("%s", alphabet_war("[a]#[b]#[c]"));
    return 0;
}

char * alphabet_war(const char * battlefield)
{

  char *war = battlefield;

  size_t warriors = strlen(battlefield);

  char *survivors = malloc( (warriors + 1) * sizeof(char));

  survivors[warriors] = '\0';

  memcpy(survivors, battlefield, warriors);

  //printf("%s", survivors);

  int nuclear_strikes = 0;
  int total_shelters = 0;
  int length = strlen(battlefield);

  for(;*battlefield; battlefield++)
  {
    if(*battlefield == '#')
      nuclear_strikes++;
    if(*battlefield == '[' || *battlefield == ']')
      total_shelters++;
  }


  int bombs_location[warriors];

      for(int i = 0; i < warriors; i++)
      {
        if(survivors[i] == '#') bombs_location[i] = i;
        else bombs_location[i] = 0;
      }

   for(int i = 0; i < warriors; i++)
   {
       printf("%d   ", bombs_location[i]);
   }

    printf("\n");

    int nuclear_strikes_copy = nuclear_strikes;
    int total_shelters_copy = total_shelters;

  // war begins here
  // finishing the survivors outside the shelters
  for(;nuclear_strikes; nuclear_strikes--)
  {
    for(size_t i = 0; i < warriors; i++)
    {
      if(survivors[i] == '[')
      {
        do
        {
          i++;
        }while(survivors[i] != ']');
        continue;
      }
       if(survivors[i] != '[') survivors[i] = '0';
    }
  }


    // destroying shelters and its inside residents
  for(;nuclear_strikes_copy; nuclear_strikes_copy--)
  {
      for(size_t i = 0; i < warriors; i++)
      {
          if(survivors[i] == '[')
          {
                survivors[i] = '0';
                do
                {
                    i++;
                }while(survivors[i] != ']');
                break;
          }
           else survivors[i] = '0';
      }
  }

  return survivors;
}
