#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include<unistd.h>
#include <wchar.h>

#define LIMIT 10


void print_logo(void)
{
    printf("\t     ____          __                          __    __        __   __          \n");
    printf("\t    / __/__  ___ _/ /_____ ___   ___ ____  ___/ /   / /__ ____/ /__/ /__ _______\n");
    printf("\t   _\\ \\/ _ \\/ _ `/  '_/ -_|_-<  / _ `/ _ \\/ _  /   / / _ `/ _  / _  / -_) __(_-<\n");
    printf("\t  /___/_//_/\\_,_/_/\\_\\__/___/   \\_,_/_//_/\\_,_/   /_/\\_,_/\\_,_/\\_,_/\\__/_/ /___/\n");
    printf("\n\n\n");
}

void up_num(int up[][2])
{
    int i, j, k, h;
    int check[6];


    /*randomly generates numbers and puts them into up array*/
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            up[i][j] = rand() % 100;
        }
    }

    /*puts the numbers from up array into check array for checking*/
    h = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            check[h++] = up[i][j];
        }
    }


    /*check array will make sure that there will only be one up tile per row else random generate until only one up tile per row*/
    i = 0, j = i + 1;
    while (i < 6 || j < 6) {
        if (check[i] == check[j] || check[i] / 10 == check[j] / 10) {
            check[i] = rand() % 100;
            i = 0;
            j = 0;
        } else {
            j++;
        }
        
        if (j == i) {
            i++;
            j = 0;
        }
    }
    

    /*After successfully checking, it puts back the values into the up array*/
    h = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            up[i][j] = check[h++];
        }
    }


    /*Rearranges the pairs in the array making sure the smaller goes first so that later easy to assign values*/
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            if(up[i][j] > up[i][j + 1]) {
                k = up[i][j];
                up[i][j] = up[i][j + 1];
                up[i][j + 1] = k;
            }
        }
    }
    
}

void down_num(int down[][2])
{
    int i, j, k, h;
    int check[6];


    /*randomly generates numbers and puts them into down array*/
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            down[i][j] = rand() % 100;
        }
    }

    /*puts the numbers from down array into check array for checking*/
    h = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            check[h++] = down[i][j];
        }
    }


    /*check array will make sure that there will only be one down tile per row else random generate until only one dpwn tile per row*/
    i = 0, j = i + 1;
    while (i < 6 || j < 6) {
        if (check[i] == check[j] || check[i] / 10 == check[j] / 10) {
            check[i] = rand() % 100;
            i = 0;
            j = 0;
        } else {
            j++;
        }
        
        if (j == i) {
            i++;
            j = 0;
        }
    }
    

    /*After successfully checking, it puts back the values into the down array*/
    h = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            down[i][j] = check[h++];
        }
    }


    /*Rearranges the pairs in the array making sure the smaller goes first so that later easy to assign values*/
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            if(down[i][j] < down[i][j + 1]) {
                k = down[i][j];
                down[i][j] = down[i][j + 1];
                down[i][j + 1] = k;
            }
        }
    }
    
}


void check(int up[][2], int down[][2])
{
    int h, i, j, k, m = 0;
    int check_up[6];
    int check_down[6];
    int counter = 0;

   

    for (k = 0; k < 6; k++) {

        if(counter == 0) {
            h = 0, m = 0;
            for (i = 0; i < 3; i++) {
                for(j = 0; j < 2; j++) {
                    check_up[h++] = up[i][j];
                    check_down[m++] = down[i][j];
                }
            }
        } 

        counter++;
        for(j = 0; j < 6; j++) {
            if (check_up[k] == check_down[j]) {
                check_up[k] += 1;
                k = 0;
                counter = 0;
            }
        }
    }


    h = 0, m = 0;
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            up[i][j] = check_up[h++];
            down[i][j] = check_down[m++];
        }
    }



    for(i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            if(up[i][j] > up[i][j + 1]) {
                k = up[i][j];
                up[i][j] = up[i][j + 1];
                up[i][j + 1] = k;
            }
        }
    }

    for(i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            if(down[i][j] < down[i][j + 1]) {
                k = down[i][j];
                down[i][j] = down[i][j + 1];
                down[i][j + 1] = k;
            }
        }
    }


    

}


int my_move(int *player_move, int *user_move, int *counter)
{
    int move;

    move = rand() % 12;

    if(move == 1) {
        *counter++;
    }
    *user_move = move;
    *player_move += move;
    return *player_move;
}

int cpu_move(int *opp_move, int *pc_move)
{
    int move;

    move = rand() % 12;
    *pc_move = move;
    *opp_move += move;

    return *opp_move;
}

void print_start(int *up1, int *up2, int *up3, int *up4, int *up5, int *up6, int *down1, int *down2, int *down3, int *down4, int *down5, int *down6)
{
    int i, j, temp = 0, num = 99;

    system("cls");


    printf("The first up tile is from %d to %d\n", *up1, *up2);
    printf("The second up tile is from %d to %d\n", *up3, *up4);
    printf("The third up tile is from %d to %d\n", *up5, *up6);
    printf("\n");
    printf("The first down tile is from %d to %d\n", *down1, *down2);
    printf("The second down tile is from %d to %d\n", *down3, *down4);
    printf("The third down tile is from %d to %d\n\n", *down5, *down6);
    printf("\n\n");
    printf("Player = ");
    printf("\033[0;32m");
    printf("\u25A0\n");
    printf("\033[0m");
    printf("CPU = ");
    printf("\033[0;31m");
    printf("\u25A0\n");
    printf("\033[0m");
    printf("Same spot = ");
    printf("\033[0;33m");
    printf("\u25A0  ");
    printf("\033[0m");
    printf("\n\n");

    printf("\t\t\t\t\t");
    /* prints top line */
    for (int j = 0; j < 10; j++) {
        printf("\033[0;35m");
        printf("+----");
    }
    printf("+\n");
    printf("\t\t\t\t\t");
    for (i = 0; i < LIMIT; i++) {

        for (j = 0; j < LIMIT; j++) {
            if (i % 2 == 0) {
                printf("\033[0;35m");
                printf("| %2d ", num--);
            } else {
                temp = num;
                num -= 9;
                while (num <= temp) {
                    printf("\033[0;35m");

                    if(num == 0) {
                        printf("| ");
                        printf("\033[0;33m");
                        printf("\u25A0  ");
                        printf("\033[0m");
                        printf("\033[0;35m");
                        num++;
                        j++;
                    } else {
                        printf("| %2d ", num++);
                        j++;
                    }
                }
                num -= 11; 
            }
        }

        printf("|\n");
        /* prints the bottom line */
        printf("\t\t\t\t\t");
        for (int j = 0; j < 10; j++) {
            printf("+----");
        }
        printf("+\n");
        printf("\t\t\t\t\t");
    }
    printf("\033[0m");

}



void print_board(int *player_move, int *opp_move, int *up1, int *up2, int *up3, int *up4, int *up5, int *up6, int *down1, int *down2, int *down3, int *down4, int *down5, int *down6, int *counter) 
{

    int i, j, k, num = 99, temp = 0;

    system("cls");

    printf("The first up tile is from %d to %d\n", *up1, *up2);
    printf("The second up tile is from %d to %d\n", *up3, *up4);
    printf("The third up tile is from %d to %d\n", *up5, *up6);
    printf("\n");
    printf("The first down tile is from %d to %d\n", *down1, *down2);
    printf("The second down tile is from %d to %d\n", *down3, *down4);
    printf("The third down tile is from %d to %d\n\n", *down5, *down6);
    printf("\n\n");
    printf("Player = ");
    printf("\033[0;32m");
    printf("\u25A0\n");
    printf("\033[0m");
    printf("CPU = ");
    printf("\033[0;31m");
    printf("\u25A0\n");
    printf("\033[0m");
    printf("Same spot = ");
    printf("\033[0;33m");
    printf("\u25A0  ");
    printf("\033[0m");
    printf("\n\n");

    printf("\t\t\t\t\t");

    /* prints top line */
    for (int j = 0; j < 10; j++) {
        printf("\033[0;35m");
        printf("+----");
    }
    printf("+\n");
    printf("\t\t\t\t\t");

    /* prints the board */

    for (i = 0; i < LIMIT; i++) {

        for (j = 0; j < LIMIT; j++) {
            if (i % 2 == 0) {
                if(*player_move == *up1) {
                    *player_move = *up2;
                } else if (*player_move == *up3) {
                    *player_move = *up4;
                } else if (*player_move == *up5) {
                    *player_move = *up6;
                } 
                
                if (counter == 0) {
                    if (*player_move == *down1) {
                        *player_move = *down2;
                    } else if (*player_move == *down3) {
                        *player_move = *down4;
                    } else if (*player_move == *down5) {
                        *player_move = *down6;
                    }
                }
                

                if(*opp_move == *up1) {
                    *opp_move = *up2;
                } else if (*opp_move == *up3) {
                    *opp_move = *up4;
                } else if (*opp_move == *up5) {
                    *opp_move = *up6;
                } else if (*opp_move == *down1) {
                    *opp_move = *down2;
                } else if (*opp_move == *down3) {
                    *opp_move = *down4;
                } else if (*opp_move == *down5) {
                    *opp_move = *down6;
                }

                if (*player_move == num && *opp_move == num) {
                    printf("| ");
                    printf("\033[0;33m");
                    printf("\u25A0  ");
                    printf("\033[0m");
                    num--;
                } else if (*player_move == num) {
                    printf("| ");
                    printf("\033[0;32m");
                    printf("\u25A0  ");
                    printf("\033[0m");
                    num--;
                } else if (*opp_move == num) {
                    printf("| ");
                    printf("\033[0;31m");
                    printf("\u25A0  ");
                    printf("\033[0m");
                    num--;
                } else if (*down1 == num || *down2 == num || *down3 == num || *down4 == num || *down5 == num || *down6 == num) {
                    printf("| ");
                    printf("\U0001F40D ");
                    num--;
                } else if (*up1 == num || *up2 == num || *up3 == num || *up4 == num || *up5 == num || *up6 == num) {
                    printf("| ");
                    printf("\U0001FA9C  ");
                    num--;
                } else {
                    printf("\033[0;35m");
                    printf("| %2d ", num--);
                }

            } else {
                temp = num;
                num -= 9;
                while (num <= temp) {

                    if(*player_move == *up1) {
                        *player_move = *up2;
                    } else if (*player_move == *up3) {
                        *player_move = *up4;
                    } else if (*player_move == *up5) {
                        *player_move = *up6;
                    }
                    

                    if (counter == 0) {
                        if (*player_move == *down1) {
                            *player_move = *down2;
                        } else if (*player_move == *down3) {
                            *player_move = *down4;
                        } else if (*player_move == *down5) {
                            *player_move = *down6;
                        }
                    }


                    if(*opp_move == *up1) {
                        *opp_move = *up2;
                    } else if (*opp_move == *up3) {
                        *opp_move = *up4;
                    } else if (*opp_move == *up5) {
                        *opp_move = *up6;
                    } else if (*opp_move == *down1) {
                        *opp_move = *down2;
                    } else if (*opp_move == *down3) {
                        *opp_move = *down4;
                    } else if (*opp_move == *down5) {
                        *opp_move = *down6;
                    }

                    

                    if (*player_move == num && *opp_move == num) {
                        printf("| ");
                        printf("\033[0;33m");
                        printf("\u25A0  ");
                        printf("\033[0m");
                        num++;
                        j++;
                    } else if (*player_move == num) {
                        printf("| ");
                        printf("\033[0;32m");
                        printf("\u25A0  ");
                        printf("\033[0m");
                        num++;
                        j++;
                    } else if (*opp_move == num) {
                        printf("| ");
                        printf("\033[0;31m");
                        printf("\u25A0  ");
                        printf("\033[0m");
                        num++;
                        j++;
                    } else if (*down1 == num || *down2 == num || *down3 == num || *down4 == num || *down5 == num || *down6 == num) {
                        printf("| ");
                        printf("\U0001F40D ");
                        num++;
                        j++;
                    } else if (*up1 == num || *up2 == num || *up3 == num || *up4 == num || *up5 == num || *up6 == num) {
                        printf("| ");
                        printf("\U0001FA9C  ");
                        num++;
                        j++;
                    } else {
                        printf("\033[0;35m");
                        printf("| %2d ", num++);
                        j++;
                    }
                }

                num -= 11;
            
            }
        }
        printf("|\n");

        printf("\t\t\t\t\t");
        /* prints the bottom line */
        for (int j = 0; j < 10; j++) {
            printf("+----");
        }
        printf("+\n");
        printf("\t\t\t\t\t");
    }
    
}


int main(void)
{
    int i, j, k = 3, h = 3, num = 99, stop;
    int player_move = 0, opp_move = 0;
    char choice, choice2, choice3, choice4;
    int user_move = 0, pc_move = 0;
    int up1, up2, up3, up4, up5, up6;
    int down1, down2, down3, down4, down5, down6;
    int up[3][2];
    int down[3][2];
    int counter = 0;


    srand((unsigned) time(NULL));
    system("cls");


    printf("WELCOME TO MY SNAKES AND LADDERS GAME\n\n");
    print_logo();
    printf("Legend:\n");
    printf("Player = ");
    printf("\033[0;32m");
    printf("\u25A0\n");
    printf("\033[0m");
    printf("CPU = ");
    printf("\033[0;31m");
    printf("\u25A0\n");
    printf("\033[0m");
    printf("Same spot = ");
    printf("\033[0;33m");
    printf("\u25A0  ");
    printf("\033[0m");
    printf("\n\n");

    /*randomly generates the up and down tiles*/
    up_num(up);
    down_num(down);
    check(up, down);

    up1 = up[0][0];
    up2 = up[0][1];
    up3 = up[1][0];
    up4 = up[1][1];
    up5 = up[2][0];
    up6 = up[2][1];

    down1 = down[0][0];
    down2 = down[0][1];
    down3 = down[1][0];
    down4 = down[1][1];
    down5 = down[2][0];
    down6 = down[2][1];


    /*Loop for the main gameplay of the game*/
    printf("\nWould you like to play Normal Mode or Developer Mode?:\n");
    printf("1. Normal Mode\n");
    printf("2. Developer Mode\n");
    printf("Enter the number of your choice: ");
    scanf(" %c", &choice);
    printf("\n\n");
    if (toupper(choice) == '1') {
        print_start(&up1, &up2, &up3, &up4, &up5, &up6, &down1, &down2, &down3, &down4, &down5, &down6);
        printf("\n\nWould you like to roll the dice and start the game? (y/n): ");
        scanf(" %c", &choice2);
        if (toupper(choice2) == 'Y') {
            while (player_move < 99 && opp_move < 99) {
                printf("Press y to roll the dice: ");
                scanf(" %c", &choice3);
                if(toupper(choice3) == 'Y') {
                    my_move(&player_move, &user_move, &counter);
                    if(counter == 2) {
                        my_move(&player_move, &user_move, &counter);
                        counter = 0;
                    }
                    cpu_move(&opp_move, &pc_move);
                    print_board(&player_move, &opp_move, &up1, &up2, &up3, &up4, &up5, &up6, &down1, &down2, &down3, &down4, &down5, &down6, &counter);
                    printf("\033[0m");
                    printf("\n\nThe player rolled a %d\n", user_move);
                    printf("The CPU rolled a %d\n", pc_move);
                }
            }
        } else {
            printf("Thanks for playing!\n");
            return 0;
        }
    } else if(choice == '2') {
        system("cls");
        printf("Enter the down tiles (Cannot enter numbers in first row of board 0-9)\n\n");
        printf("Enter first number for down tile: ");
        scanf("%d", &down1);
        while (down1 == 0 || down1 == 1 || down1 == 2 || down1 == 3 || down1 == 4 || down1 == 5 || down1 == 6 || down1 == 7 || down1 == 8 || down1 == 9) {
            printf("\nCannot enter numbers in first row of board 0-9\n\n");
            printf("Enter first number for down tile: ");
            scanf("%d", &down1);
        }
        printf("Enter the number it will go down to: ");
        scanf("%d", &down2);
        while (down2 > down1) {
            printf("\nEnter a smaller number the down tile should go down to:");
            scanf("%d", &down2);
        }
        printf("\nEnter the second number for down tile: ");
        scanf("%d", &down3);
        while (down3 == 0 || down3 == 1 || down3 == 2 || down3 == 3 || down3 == 4 || down3 == 5 || down3 == 6 || down3 == 7 || down3 == 8 || down3 == 9) {
            printf("\nCannot enter numbers in first row of board 0-9\n\n");
            printf("Enter first number for down tile: ");
            scanf("%d", &down3);
        }
        printf("Enter the number it will go down to: ");
        scanf("%d", &down4);
        while (down4 > down3) {
            printf("\nEnter a smaller number the down tile should go down to:");
            scanf("%d", &down4);
        }
        printf("\nEnter the third number for down tile: ");
        scanf("%d", &down5);
        while (down5 == 0 || down5 == 1 || down5 == 2 || down5 == 3 || down5 == 4 || down5== 5 || down5 == 6 || down5 == 7 || down5 == 8 || down5 == 9) {
            printf("\nCannot enter numbers in first row of board 0-9\n\n");
            printf("Enter first number for down tile: ");
            scanf("%d", &down5);
        }
        printf("Enter the number it will go down to: ");
        scanf("%d", &down6);
        while (down6 > down5) {
            printf("Enter a smaller number the down tile should go down to:");
            scanf("%d", &down6);
        }
        counter = 1;
        print_start(&up1, &up2, &up3, &up4, &up5, &up6, &down1, &down2, &down3, &down4, &down5, &down6);
        printf("\n\nWould you like to roll the dice and start the game? (y/n): ");
        scanf(" %c", &choice2);
        if (toupper(choice2) == 'Y') {
            while (player_move < 99 && opp_move < 99) {
                printf("Press y to roll the dice: ");
                scanf(" %c", &choice3);
                if(toupper(choice3) == 'Y') {
                    my_move(&player_move, &user_move, &counter);
                    if(counter == 2) {
                        my_move(&player_move, &user_move, &counter);
                        counter = 0;
                    }
                    cpu_move(&opp_move, &pc_move);
                    print_board(&player_move, &opp_move, &up1, &up2, &up3, &up4, &up5, &up6, &down1, &down2, &down3, &down4, &down5, &down6, &counter);
                    printf("\033[0m");
                    printf("\n\nThe player rolled a %d\n", user_move);
                    printf("The CPU rolled a %d\n", pc_move);
                }
            }
        } else {
            printf("Thanks for playing!\n");
            return 0;
        }


    }
        
    


    /*checks and prints out the results*/
    if (player_move >= 99 && opp_move >= 99) {
            sleep(2);
            system("cls");
            printf("\t\t\t·▄▄▄▄  ▄▄▄   ▄▄▄· ▄▄▌ ▐ ▄▌\n");
            printf("\t\t\t██▪ ██ ▀▄ █·▐█ ▀█ ██· █▌▐█\n");
            printf("\t\t\t▐█· ▐█▌▐▀▀▄ ▄█▀▀█ ██▪▐█▐▐▌\n");
            printf("\t\t\t██. ██ ▐█•█▌▐█ ▪▐▌▐█▌██▐█▌\n");
            printf("\t\t\t▀▀▀▀▀• .▀  ▀ ▀  ▀  ▀▀▀▀ ▀▪\n");


            printf("\n\nWould you like to play again (y/n)?: ");
            scanf(" %c", &choice4);
            if(choice4 == 'y') {
                main();
            } else {
                printf("\nThanks for playing!\n");
                return 0;
            }
            

        } else if (player_move >= 99) {
            sleep(2);
            system("cls");
            printf(
            "\t\t\t██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗██╗███╗   ██╗\n"
            "\t\t\t╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██║████╗  ██║\n"
            "\t\t\t ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║██╔██╗ ██║\n"
            "\t\t\t  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║██║╚██╗██║\n"
            "\t\t\t   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝██║██║ ╚████║\n"
            "\t\t\t   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝\n");

            printf("\n\nWould you like to play again (y/n)?: ");
            scanf(" %c", &choice4);
            if(choice4 == 'y') {
                main();
            } else {
                printf("\nThanks for playing!\n");
                return 0;
            }


        } else {
            sleep(2);
            system("cls");
            printf(
            "\t\t\t▓██   ██▓ ▒█████   █    ██     ██▓     ▒█████    ██████ ▄▄▄█████▓\n"
            "\t\t\t ▒██  ██▒▒██▒  ██▒ ██  ▓██▒   ▓██▒    ▒██▒  ██▒▒██    ▒ ▓  ██▒ ▓▒\n"
            "\t\t\t  ▒██ ██░▒██░  ██▒▓██  ▒██░   ▒██░    ▒██░  ██▒░ ▓██▄   ▒ ▓██░ ▒░\n"
            "\t\t\t  ░ ▐██▓░▒██   ██░▓▓█  ░██░   ▒██░    ▒██   ██░  ▒   ██▒░ ▓██▓ ░ \n"
            "\t\t\t  ░ ██▒▓░░ ████▓▒░▒▒█████▓    ░██████▒░ ████▓▒░▒██████▒▒  ▒██▒ ░ \n"
            "\t\t\t   ██▒▒▒ ░ ▒░▒░▒░ ░▒▓▒ ▒ ▒    ░ ▒░▓  ░░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░  ▒ ░░   \n"
            "\t\t\t ▓██ ░▒░   ░ ▒ ▒░ ░░▒░ ░ ░    ░ ░ ▒  ░  ░ ▒ ▒░ ░ ░▒  ░ ░    ░    \n"
            "\t\t\t ▒ ▒ ░░  ░ ░ ░ ▒   ░░░ ░ ░      ░ ░   ░ ░ ░ ▒  ░  ░  ░    ░      \n"
            "\t\t\t ░ ░         ░ ░     ░            ░  ░    ░ ░        ░           \n"
            "\t\t\t ░ ░                                                             \n");

            printf("\n\nWould you like to play again (y/n)?: ");
            scanf(" %c", &choice4);
            if(choice4 == 'y') {
                main();
            } else {
                printf("\nThanks for playing!\n");
                return 0;
            }

        }


    return 0;
}