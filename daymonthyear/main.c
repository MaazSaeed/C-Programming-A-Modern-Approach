#include <stdio.h>
#include <stdlib.h>

int dayOfYear(int day, int month);

int main()
{
    printf("day of the year: %d", dayOfYear(12, 2));
    return 0;
}

int dayOfYear(int day, int month)
{
    int months[] =  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day_ = day;
    for(int i = 0; i < month - 1; i++) day_ += months[i];

    return day_;
}
