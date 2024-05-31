#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1;
    while(counter <= 100)
    {
        if(counter % 3 == 0 && counter % 5 == 0) printf("FizzBuzz");
        else if(counter % 3 == 0) printf("Fizz");
        else if(counter % 5 == 0) printf("Buzz");
        else printf("%d", counter);

        printf("\n");
        ++counter;
    }


    return 0;
}
