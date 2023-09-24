#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'O';
const char COMPUTER = 'X';

void reset(void);
void print_board(void);
int check_space();
void player_turn(void);
void computer_turn(void);
char check_win(void);
void print_winner(char winner);

int main (void) 
{
    char winner = ' ';
    char response;

    printf(".___________. __    ______    .___________.    ___       ______    .___________.  ______    _______ \n"
           "|           ||  |  /      |   |           |   /   \\     /      |   |           | /  __  \\  |   ____|\n"
           "`---|  |----`|  | |  ,----'   `---|  |----`  /  ^  \\   |  ,----'   `---|  |----`|  |  |  | |  |__   \n"
           "    |  |     |  | |  |            |  |      /  /_\\  \\  |  |            |  |     |  |  |  | |   __|  \n"
           "    |  |     |  | |  `----.       |  |     /  _____  \\ |  `----.       |  |     |  `--'  | |  |____ \n"
           "    |__|     |__|  \\______|       |__|    /__/     \\__\\ \\______|       |__|      \\______/  |_______|\n\n\n");
    do {
        winner = ' ';
        response = ' ';
        reset();

        while (winner == ' ' && check_space() != 0) {
            print_board();
            /*players part of the program*/
            player_turn();
            winner = check_win();
            if(winner != ' ' || check_space() == 0) {
                break;
            }
            /*computer's part of the program*/
            computer_turn();
            winner = check_win();
            if(winner != ' ' || check_space() == 0) {
                break;
            }
        }
        
        print_board();
        print_winner(winner);

        printf("Would you like to play again(Y/N)? : ");
        getchar();
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');

    printf("THANK YOU FOR PLAYING.\n");

    return 0;
}

void reset(void)
{
    int i, j;

    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void print_board(void)
{
    printf("\t\t\t\t\t\t %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t\t\t\t\t------------\n");
    printf("\t\t\t\t\t\t %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t\t\t\t\t------------\n");
    printf("\t\t\t\t\t\t %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int check_space()
{
    int i, j, freeSpaces = 9;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] != ' ') {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void player_turn(void)
{
    int row, col;

    do {
         printf("Enter row #(1-3): ");
        scanf("%d", &row);
        row--;
        printf("Enter column #(1-3): ");
        scanf("%d", &col);
        col--;

        if(board[row][col] != ' ') {
            printf("Invalid move!\n");
        }
        else {
            board[row][col] = PLAYER;
            break;
        }
   }  while (board[row][col] != ' ');
}

void computer_turn(void)
{
    int row, col;
    /*seed that makes sure the move of computer is always random*/
    srand((unsigned) time(NULL)); 

    if (check_space > 0) {
        do {
            row = rand() % 3;
            col = rand() % 3;
        } while (board[row][col] != ' ');
        board[row][col] = COMPUTER;
    } else {
        print_winner(' ');
    }
}

char check_win(void)
{
    int i, j;

    /*checks the rows*/
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board [i][1] && board[i][0] == board[i][2]) {
            return board[i][0];
        }
    }
    /*checks the coloumns*/
    for (i = 0; i < 3; i++) {
        if (board[0][i] == board [1][i] && board[0][i] == board[2][i]) {
            return board[0][i];
        }
    }
    /*checks diagonals*/
    if (board[0][0] == board [1][1] && board[0][0] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] == board [1][1] && board[0][2] == board[2][0]) {
        return board[0][2];
    }

    return ' ';
}

void print_winner(char winner)
{
    if (winner == PLAYER) {
        printf("You win !!!\n");
        printf("Congratulations\n");
    } else if (winner == COMPUTER) {
        printf("You lose !!!\n");
        printf("Better luck next time\n");
    } else if (winner == ' ') {
        printf("Its a draw :/\n");
    }
}
