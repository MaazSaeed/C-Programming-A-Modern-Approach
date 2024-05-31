#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    unsigned long long int n;
    int cdigit; // current digit
    int nc;
    int cDigit = 0;
    int occurrence = 0;
    int startDigit = 0;
    //n = uI;
    printf("Enter a number: ");
    scanf("%ulld", &n);
    nc = n;

    while(nc > 0)
    {
        N++;
        nc /= 10;
    }

    int digits[N];
    for(int i = 0; i < N; i++)
    {
        cdigit = n % 10;
        digits[i] = cdigit;
        n /= 10;
    }

    printf("Digit:      ");
    for(int i = 0; i < 10; i++) printf("%d ", i);

    printf("\n");

    printf("Occurrence: ");
    while(startDigit < 10)
    {
        for(int i = 0; i < N; i++)if(digits[i] == startDigit) occurrence++; else;

        printf("%d ", occurrence);
        occurrence = 0;
        startDigit++;
    }
    return 0;
}
