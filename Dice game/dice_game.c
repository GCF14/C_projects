#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int roll_dice (void);
bool play_game(void);


int main (void) 
{
    int wins = 0, losses = 0;
    char c;

    printf("WELCOME TO MY GAME\n");
    printf("Rues: On the first roll, the player wins if the sum of the dice rolled is 7 or 11. If the sum of the first roll is 2, 3, or 12 they lose.\n");
    printf("Any other roll is called the ""point"" and the game continues. On each subsequent roll, the player wins if he or she rolls the point again.\n");
    printf("The player loses by rolling 7. Any other roll is ignored and the game continues.\n\n");

    srand((unsigned) time(NULL));

    while (1) {

        if(play_game()) {
            wins++;
        } else {
            losses++;
        }

        printf("Play again? ");
        scanf(" %c", &c);

        if (c != 'y' && c != 'Y') {
            break;
        }
        printf("\n");
    }

    printf("\nWins: %d\t\tLosses: %d", wins, losses);

    return 0;
}

int roll_dice (void)
{
   return rand() % 6 + rand() % 6 + 2;
}

bool play_game(void) 
{
    int dice = roll_dice(), point;

    if (dice == 7 || dice == 11) {
        printf("You win on first roll with %d!!! \n\n", dice);
        return true;
    } else if (dice == 2|| dice == 3 || dice == 12) {
        printf("You lose on first roll with %d :<\n\n", dice);
        return false;
    }

    point = dice;
    printf("Your point is %d\n", point);

    while (dice = roll_dice()) {
        printf("You rolled %d\n", dice);

        if(dice == point) {
            printf("You win!!!\n\n");
            return true;
        }

        if(dice == 7) {
            printf("You lose :<\n\n");
            return false;
        }
    }
}