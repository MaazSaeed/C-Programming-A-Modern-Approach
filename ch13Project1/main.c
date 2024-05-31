#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// the maximum allowed length of a word.
#define MSG_LEN 20

int main()
{
    // starting code
    char smallest_word[MSG_LEN + 1] = {'\0'}; // the variables are self explanatory
    char largest_word[MSG_LEN + 1] = {'\0'};    // null terminated to ensure the compiler treats them as strings

    char word[MSG_LEN + 1] = {'\0'}; // the arrays stores the current word entered by the user

    // we randomly assign smallest word and largest word
    // then later check to see if the words they store are correct i.e both largest and smallest store the right words as they should
    printf("Enter word: ");
    scanf("%s", word);

    strcpy(largest_word, word);

    printf("Enter word: ");
    scanf("%s", word);

    strcpy(smallest_word, word);

    // this statement checks to see if smallest word and largest word both stores the right words as they are
    // if not the words are swapped if smallest word is larger than the largest word
    if(strcmp(smallest_word, largest_word) > 0)
    {
        char copy[MSG_LEN + 1];
        memcpy(copy, smallest_word, MSG_LEN * sizeof(char)); // stores b
        strcpy(smallest_word, largest_word);
        strcpy(largest_word, copy);
    }

    for(;;)
    {
        printf("Enter word: ");
        scanf("%s", word);

        // the program stops if the user enters 123
        if(strcmp(word, "123") == 0) break;

        // if the current word entered is larger than the previously stored largest word, replace it with the current word
        if(strcmp(word, largest_word) > 0) strcpy(largest_word, word);

        // if the current word entered is smaller than the previously stored smallest word, replace it with the current word
        if(strcmp(word, smallest_word) < 0) strcpy(smallest_word, word);
    }

    // Prints out the smallest and largest word after user enters 123
    printf("----------------------------------\n");
    printf("SMALLEST WORD: %s\n", smallest_word);
    printf("LARGEST WORD: %s\n", largest_word);
    printf("----------------------------------\n");

    return 0;
}
