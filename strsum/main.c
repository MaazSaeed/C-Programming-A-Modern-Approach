#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <stdbool.h>

char *strsum(const char *a, const char *b);

int main()
{
    const char a[] = "9";
    const char b[] = "6";

    const char x[] = "50";
    const char y[] = "4";

    // add all the above numbers

    printf("Total: %s\n", strsum(strsum(a, b), strsum(x, y)));

    return 0;
}

char *strsum(const char *a, const char *b)
{
// this code is something not even dennis ritchie or bjarne stroustrup would be able to fathom
// that is how obscure it is
// good luck...with your headache after reading this code

    int len_a = strlen(a);
    int len_b = strlen(b);

    for(;*a == '0'; a++)len_a--;
    for(;*b == '0'; b++)len_b--;

    //static char n[2] = "0";
    //if(len_a == 0 && len_b == 0) return n;

    int len = len_a > len_b ? len_a : len_b; // returns the length of largest string among the two

    len += 2; // incrementing by 2 to ensure enough space to store the sum of two numbers

    char *sum = malloc(len * sizeof(char)); // dynamically allocating the memory

    char *p_a = a + len_a - 1;
    char *p_b = b + len_b - 1;

    char *g = len_a > len_b ? p_a : p_b;
    char *s;

    int g_len = len_a > len_b ? len_a : len_b;

    if(len_a == 0 && len_b != 0)
    {
        return b;
    }

    if(len_b == 0 && len_a != 0)
    {
        return a;
    }

    if(g_len == 0)
    {
        sum[0] = '0';
        sum[1] = '\0';
        return sum;
    }

    char *rem;
    char *remg;

    if(g == p_a)
    {
        s = p_b;
        rem = b;
        remg = a;
    }
    else
    {
        s = p_a;
        rem = a;
        remg = b;
    }

    for(int i = 0; i < len; i++) sum[i] = '\0';

    int total = 0;
    int digit_g = 0;
    int digit_s = 0;

    bool next = false;
    bool pass = false;

    int i = 0;

    if(g_len == 1)
    {
        int dig_g = *g - '0';
        int dig_s = *s - '0';

        int total = dig_g + dig_s;

        if(total >= 10)
        {
            int rem = total % 10 + '0';
            sum[0] = rem;
            sum[1] = total/10 + '0';
        }
        else
        {
            sum[0] = total + '0';
            sum[1] = '\0';
        }

    int new_len = strlen(sum);

    for(int i = 0, j = new_len - 1; i < new_len/2; j--, i++)
    {
        char temp = sum[i];
        sum[i] = sum[j];
        sum[j] = temp;
    }
        //strrev(sum);
        return sum;
    }

    for(; i < g_len + 1; g--, s--, i++)
    {
        if(g >= remg) digit_g = *g - '0';
        else digit_g = 0;

        if(s >= rem) digit_s = *s - '0';
        else digit_s = 0;

      //printf("%d\n", digit_g);
      //printf("%d\n", digit_s);

      if(next)
      {
        digit_g += 1;
        next = false;
      }

      total = digit_g + digit_s;

      if(total >= 10)
      {
        sum[i] = (total % 10) + '0';
        next = true;
        continue;
      }

      if(i == g_len && total == 0) continue;
    else sum[i] = total + '0';
    }

    sum[i] = '\0';

    int new_len = strlen(sum);

    for(int i = 0, j = new_len - 1; i < new_len/2 ; j--, i++)
    {
        char temp = sum[i];
        sum[i] = sum[j];
        sum[j] = temp;
    }

    //strrev(sum);
    return sum;
}
