#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STACK_SIZE 10

/* External Variables */
int brackets[STACK_SIZE];
int top = 0;

/* Function prototypes */
void Push(int c);
char Pop(void);
void StackOverFlow();
void StackUnderFlow();
int IsFull();
int IsEmpty();

int main()
{
    char c;

    printf("Enter parentheses and/or braces: ");

    while((c = getchar()) != '\n')
    {
        if(c == ')' && Pop() != '(')
        {
            printf("Go back to school!!");
            return 0;
        }
        else if(c == '(')
        {
            Push(c);
        }
    }
    printf("Parentheses/braces are nested properly\n");
    return 0;
}

void Push(int c)
{
    if(IsFull()) StackOverFlow();
    else brackets[top++] = c;
}

char Pop(void)
{
    if(IsEmpty()) StackUnderFlow();
    else return brackets[--top];
}

int IsFull()
{
    return top == STACK_SIZE;
}

int IsEmpty()
{
    return top == 0;
}

void StackOverFlow()
{
}
void StackUnderFlow()
{
}


