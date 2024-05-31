#include <stdio.h>
#include <stdlib.h>

int josephus_survivor(int n, int k);

int main()
{
    printf("%d", josephus_survivor(17, 3));
    return 0;
}

int josephus_survivor(int n, int k)
 {

  int *dead = malloc(n * sizeof(int) );

  for(int i = 0; i < n; i++)
    dead[i] = i + 1;

  for(int i = 0, j = 0; j < n - 2; i += k, j++)
  {
    if( (i + k) % k == 0) free(dead[(i + k - 1) % n]);
  }

  for(int i = 0; i  < n; i++)
  {
    if(dead[i]) return dead[i];
  }


}
