#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, denom1, denom2, result_num, result_denom;

    printf("Enter the 1st fraction: ");
    scanf("%d/%d", &num1, &denom1);

    //printf("Enter the denominator of the 1st fraction: ");
    //scanf("%d", &denom1);

    printf("Enter the 2nd fraction: ");
    scanf("%d/%d", &num2, &denom2);

    //printf("Enter the denominator of the 2nd fraction: ");
    //scanf("%d", &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("THE SUM IS: %d/%d", result_num, result_denom);

    return 0;
}
