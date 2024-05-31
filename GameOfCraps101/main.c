#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDice();
void PlayGame();
void TryAgain();

int wins, losses, gamesPlayed;
int tryAgain = 1;

int main()
{
    srand((unsigned) time(NULL));

    printf("WHEN PROMPTED TO TRY AGAIN, ENTER '1' TO PLAY AGAIN OR '0' TO EXIT.\n");
    printf("-------------------------------------------------------------------\n");
    printf("START!\n");

    while(tryAgain == 1)
    {
        PlayGame();
        TryAgain();
    }

    printf("\nWINS: %d  Losses: %d  Games Played: %d\n", wins, losses, gamesPlayed);

    return 0;
}

void TryAgain()
{
    printf("\nTry again? ");
    scanf("%d", &tryAgain);
}

int RollDice()
{   // the function rand() returns number between 0 and max range EXCLUSIVE, Adding +1 to ensure we get numbers between (inclusive) 1-6 (inclusive) as on a dice.
    int d1 = rand() % 6 + 1;
    int d2 = rand() % 6 + 1;

    return (d1 + d2);
}

void PlayGame()
{
    int roll = RollDice();
    int point;

    printf("You rolled: %d\n", roll);


    if(roll == 7 || roll == 11)
    {
        wins++;
        gamesPlayed++;
        printf("You win!\n");
        printf("---------------\n");
        return;
    }
    else if(roll == 2 || roll == 3 || roll == 12)
    {
        losses++;
        gamesPlayed++;
        printf("You lost!\n");
        printf("---------------\n");
        return;
    }

    point = roll;

    printf("POINT: %d\n", point);

    do
    {
        roll = RollDice();

        printf("You rolled: %d\n", roll);
        if(roll == point)
        {
            wins++;
            gamesPlayed++;
            printf("You win!\n");
            printf("---------------\n");
            return;
        }
    }
    while(roll != 7);

    losses++;
    gamesPlayed++;
    printf("You lost!\n");
    printf("---------------\n");
    return;
}





