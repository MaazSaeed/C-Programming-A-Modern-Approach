#include <stdio.h>
#include <stdlib.h>
#define U 9
#define CD(r)(U-r);

int main()
{
    while(1)
    {
        // the program below calculate the check digits in a UPC (Universal Prodcut Code).
        // A new bad way of declaring multiple variables.
        int
        firstDig,  // just for clean looking code.
        i1,        //...
        i2,        //...
        i3,        //....
        i4,        // .......
        i5,        //......
        i6,        //....
        i7,        //.....
        i8,        // our two
        i9,        // Fallen Soldiers
        i10,       //......
        sum1,      //...
        sum2,      //.......
        result,    //....
        checkDigit,//......
        remainder; //and out another falle

        printf("Enter the first(single) digit: "); // first digit indicates the item type
        scanf("%1d", &firstDig);

        printf("Enter the first group of five digits: ");
        scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5); // the first group of five digits represent the manufacturer.

        printf("Enter the second group of five digits: "); // the second group of five digits represent the actual product.
        scanf("%1d%1d%1d%1d%1d", &i6, &i7, &i8, &i9, &i10);

        sum1 = (firstDig + i2 + i4 + i6 + i8 + i10) * 3;
        sum2 = i1 + i3 + i5 + i7 + i9;

        result = (sum1 + sum2) - 1;
        remainder = result % 10;

        checkDigit = CD(remainder); // check digit to confirm authenticity of the product.

        printf("CHECK DIGIT: %d\n", checkDigit);
    }
    return 0;
}
