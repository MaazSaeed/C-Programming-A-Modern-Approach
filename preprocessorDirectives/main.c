#include <stdio.h>
#include <stdlib.h>

#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
#define N 10
typedef int BOOL;

#define STRINGIZE(str) #str // input anything number, words, characters etc and it will turn it into a string, MACROS DO NOT care about the type of an argument
                            // the # operator turns the argument into a string, a process called "STRINGIZATION"
GENERIC_MAX(float);
#undef GENERIC_MAX

GENERIC_MAX(int); // this  wont happen

//int myfunc(int x);
//void myfunc(int x, int y); // method overloading not allowed, sorry bro!! also functions can't have the same names even if they have different return types.. Yeah learn more C :D

int main()
{
    //printf("%.1f", float_max(3.1f, 2.2f));
    //printf("%d", N);

    char name[] = STRINGIZE(I love C but it can be a real headache sometimes...); // after preprocessing the line becomes char name[] = "MAAZ1";
    printf("%s\n", name);

    BOOL is_true = 1;

    //if(is_true) printf("typedef!!!");
    //if(0) printf("abc");; // additional semicolon implies a null statement telling compiler that the if statement has no else statement to it
    //else printf("NOO"); // hence this line gives us an error

    //#define DEBUG 0

    // the if and endif directives include a section of program in the final object code if the set condition evaluates to true

    #if 0
    printf("g u\n");
    #endif // 0

    #ifdef DEBUG
    printf("only included if the DEBUG macro is defined, the macro itself does NOT have to evaluate to true");
    // like in this case we have debug defined to 0 yet this section of code still runs.!!!!
    #endif // defined

    return 0;
}

//void myfunc(int x, int y)
//{
//
//}

//int myfunc(int x)
//{
//
//}
