#include <stdio.h>
#include <stdlib.h>


int main( ) {

   char str[100];
   int i;

   printf( "Enter a value :");
   scanf("%s%d", str, &i);

   printf( "\nYou entered: %s %d ", str, i);

   return 0;
}

/*
int main()
{
    char s[100];
    int i, j;

    printf("Enter a message: ");
    scanf("%d%s%d", &i, s, &j);

    printf("i: %d str: %s j: %d", i, s, j);

    return 0;
}
*/
