#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE] = {0};
int top = 0;

/* function prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main()
{
    char ch;

    printf("Enter an RPN Expression: ");

    while( ch != '\n')
    {
        scanf(" %c", &ch);

        if(ch >= '0' && ch <= '9')
        {
            push(ch - '0'); // converting it to a digit of type int from char
        }
        else if(ch == '*')
        {
            int x = pop();
            int y = pop();

            int res = y * x;

            push(res);
        }

        else if(ch == '+')
        {

            int x = pop();
            int y = pop();

            int res = y + x;

            push(res);
        }

        else if(ch == '-')
        {
            int x = pop();
            int y = pop();

            int res = y - x;

            push(res);
        }

        else if(ch == '/')
        {
            int x = pop();
            int y = pop();

            int res = y / x;

            push(res);
        }
        else if(ch == '=')
        {
            break;
        }
    }
    printf("RESULT: %d\n", contents[--top]);
    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full()) stack_overflow();
    else contents[top++] = i;
}

char pop(void)
{
    if (is_empty())stack_underflow();
    else return contents[--top];
}

void stack_overflow(void)
{
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("\nStack underflow\n");
    exit(EXIT_FAILURE);
}
