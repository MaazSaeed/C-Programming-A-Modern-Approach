#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
    int sum1, sum2, total, remainder, checkDigit;

    printf("Enter the 12 digits of EAN number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);

    sum1 = i1 + i3 + i5 + i7 + i9 + i11;
    sum2 = d1 + i2 + i4 + i6 + i8 + i10;

    sum1 *= 3;

    total = sum1 + sum2 - 1;
    remainder = total % 10;

    checkDigit = 9 - remainder;

    printf("CHECK DIGIT: %d\n", checkDigit);

    return 0;
}
