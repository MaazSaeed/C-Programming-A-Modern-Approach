#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
#define true 1
#define false 0
typedef int bool;

int main(void)
{
    int num_cards;
    int suit, rank;
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    const char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't' , 'j', 'q', 'k', 'a'};
    const char suits[] = {'C', 'D', 'S', 'H'};

    srand((unsigned) time(NULL));

    printf("Enter the number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("your hand: ");
    while(num_cards > 0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if(!in_hand[suit][rank])
        {
            in_hand[suit][rank] = true;
            printf(" %c%c", suits[suit], ranks[rank]);
            num_cards--;
        }
    }


    return 0;
}
