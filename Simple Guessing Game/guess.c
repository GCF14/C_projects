#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;
    int guessLimit = 3;
    int noGuess = 0;
    int guessCount = 0;

    srand((unsigned) time(NULL));
    int secret = rand() % 10;

    printf("Welcome to my guessing game!\n\n");
    while(guess != secret && noGuess == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
           noGuess = 1;
        }
    }
        if (noGuess == 1){
            printf("\nDumbass you lose. HAHAHHAHAHHAHA!\n");
            printf("The secret number was %d", secret);

        } else {
            printf("\nYou got it right! Congratulations!!!");
    }
    return 0;
}