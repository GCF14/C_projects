#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_NUM 15
#define MAX 100

int secret_num;
void initializes_number_generator(void);
void choose_new_number(void);
void read_guess(void);
void start_game(void);


int main (void)
{
    char command;

    do {
        start_game();
        printf("Would you like to play again? (Y/N)");
        scanf(" %c", &command);
    } while (toupper(command) == 'Y');

    printf("\nTHANK YOU FOR PLAYING!!\n");
    return 0;
}

void start_game(void)
{
    initializes_number_generator();
    choose_new_number();
    system("cls");
    printf("                                                           \n");
    printf(" _____ _____ _____ _____ _____    _____ _____ _____ _____ \n");
    printf("|   __|  |  |   __|   __|   __|  |   __|  _  |     |   __|\n");
    printf("|  |  |  |  |   __|__   |__   |  |  |  |     | | | |   __|\n");
    printf("|_____|_____|_____|_____|_____|  |_____|__|__|_|_|_|_____|\n");
    printf("                                                           \n\n\n");
    printf("Rule: The max amount of guesses is %d\n", MAX_NUM);
    printf("Guess the number between 1 and %d.\n", MAX);  
    printf("\nA new number has been chosen.\n");
    read_guess();
}

void initializes_number_generator(void)
{
    srand((unsigned) time(NULL));
}

void choose_new_number(void)
{
    secret_num = rand() % MAX + 1;
}

void read_guess(void)
{
    int guess, num_guess = 0;

    while (num_guess < 15) {
        num_guess++;
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess == secret_num) {
            printf("\nCongratulations you win!!!\n");
            return;
        } else if (guess < secret_num) {
            printf("Too low, try again.\n\n");
        } else if (guess > secret_num) {
            printf("Too high, try again.\n\n");
        }
    if (num_guess == 15) {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess == secret_num) {
            printf("\nCongratulations you win!!!\n");
        } else {
            printf("\nSorry you lose :<\n");
        }
    }
        
    }
}

