#include <stdio.h>
#include <stdlib.h>

int main()
{

while(1)
{
    int grade;

    printf("Enter score: ");
    scanf("%d", &grade);
    switch(grade / 10)
    {
        case 10 :
        case 9  :  printf("A");     break;
        case 8  :  printf("B");     break;
        case 7  :  printf("C");     break;
        case 6  :  printf("D");     break;
        case 5  :
        case 4  :
        case 3  :
        case 2  :
        case 1  :
        case 0  :  printf("F");     break;
        default :  printf("Null");  break;
    }
    printf("\n");
}

    return 0;
}
