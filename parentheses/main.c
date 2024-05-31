#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void push(char *top, char ch);
char pop(char *top);
bool validParentheses(const char *str);

int main()
{
    if(validParentheses("() () )()(())(())"))
        printf("properly nested!!!!!!!!!");
    else
        printf("NOT nested properly");

    printf("\n");

    return 0;
}

bool validParentheses(const char *str) {

    if(*str == '\0') return true;

    unsigned len = strlen(str);

    char *parentheses = malloc (len * sizeof(char));

    char *top = parentheses;

    int left_p = 0;
    int right_p = 0;

    for(;*str; str++)
    {
      if(*str == '(')
      {
        push(top, *str);
        top++;
        left_p++;
      }
      if(*str == ')')
      {
        right_p++;
        top--;
        if(pop(top) != '(' ) return false;
      }
    }

  if(left_p == right_p) return true;
    return false;
}

void push(char *top, char ch)
{
    *top = ch;
}

char pop(char *top)
{
    return *top;
}
