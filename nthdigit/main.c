#include <stdio.h>
#include <stdlib.h>

int digit(int n, int k);

int main()
{
    printf("%d ", digit(6969, 1));
    printf("%d ", digit(6969, 2));

    printf("%d ", digit(12345, 0)); // 0 th digit returns 0
    printf("%d ", digit(12345, 6)); // 6 th digit(out of bound) in the number 12345 return 0


    return 0;
}

int digit(int n, int k)
{
    int numberOfDigits = 0;
    int tempN = n;

    while(tempN > 0)
    {
        tempN /= 10;
        numberOfDigits++;
    }

    if(numberOfDigits == 0 || numberOfDigits < k) return 0; // if the digit required is out of bound return 0

    int digit_;
    int tempNum = n;
    int c = 0;

    // returns digit in reverse order e.g if k is 1 the code below returns the last digit of the number.
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //for(int i = k; i > 0; i--)
    //{
    //    digit_ = tempNum % 10;
    //    tempNum /= 10;
    //}

    // returns digit in proper order e.g if k is 1 the code below returns the first digit of the number.
    while(c < (numberOfDigits - k + 1))
    {
        digit_ = tempNum % 10;
        tempNum /= 10;
        c++;
    }

    return digit_;
}
