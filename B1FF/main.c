#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // the program replaces certain letters with certain digits and prints the edited message alongside the total length of the text inputted including blank spaces.
    int N = -1; // for some reason this compiler sucks and adds an extra character for no reason, thats the reason N is initialized to -1 to counter the off by one problem..
    char units[N];
    char ch;

    printf("Enter a text: ");

    do{
        ch = getchar();
        units[++N] = ch;
    }while(ch != '\n');

    for(int j = 0; j < N; j++)
    {
        switch(toupper(units[j]))
        {
            case 'A': units[j] = '4'; break;
            case 'B': units[j] = '8'; break;
            case 'E': units[j] = '3'; break;
            case 'I': units[j] = '1'; break;
            case 'O': units[j] = '0'; break;
            case 'S': units[j] = '5'; break;
            default : break;
        }
    }

    for(int c = 0; c < N; c++) putchar(units[c]);

    printf("\nTotal characters: %d", N);
    printf("\n");
    return 0;
}
