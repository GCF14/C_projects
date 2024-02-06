#include <stdio.h>
#include "events.c"
#include <stdlib.h>
#include <unistd.h>


void print_logo(void)
{
    printf("\t\t\t\t\t\t\t    ____                                      ______\n");
    printf("\t\t\t\t\t\t\t   / __ \\___  ______________  ____  ____ _   / ____/\n");
    printf("\t\t\t\t\t\t\t  / /_/ / _ \\/ ___/ ___/ __ \\/ __ \\/ __ `/  /___ \\  \n");
    printf("\t\t\t\t\t\t\t / ____/  __/ /  (__  ) /_/ / / / / /_/ /  ____/ /  \n");
    printf("\t\t\t\t\t\t\t/_/    \\___/_/  /____/\\____/_/ /_/\\__,_/  /_____/   \n");
}

void map()
{
    

}

void print_menu(void);

void rules(void) 
{
    int i, j, k, h;
    char ch;

    system("cls");
    printf("Game Mechanics: \n"
    "The game begins on September 1, year 20XX and ends on October 31, 20XX which is the day\n"
    "The player will play as Ren Amamiya. Ren witnesses the said crime occur and ends up being arrested as the “primary” suspect due to\n"
    "the main perpetrator being someone with a lot of influence. This means that players will have\n"
    "exactly 60 in-game days to satisfy the game's objective.\n"
    "Refer to the calendar in the following image to indicate the specific days and dates the game will\n"
    "be taking place.\n\n\n\n");

    printf("September 1, 20XX\n");
    printf("  Sun   Mon   Tue   Wed  Thurs  Fri   Sat\n");
    for(i = 0, k = 1; i < 5; i++) {
        for(j = 0; j < 7; j++, k++) {
            if(k < 31) {
                printf("%5d ", k);
                ++h;
            }
        }
        if(h > 6) {
            printf("\n");
            h = 0;
        }
    }

    printf("\n\n\n");
    
    printf("October 20XX\n");
    printf("  Sun   Mon   Tue   Wed  Thurs  Fri   Sat\n");
    for(i = 0, k = 1, h = 0; i < 5; i++) {
        for(j = 0; j < 7; j++) {
            if(h > 1 && k < 32) {
                printf("%5d ", k++);
            } else {
                printf("      ");
                h++;
            }
        }
        printf("\n");
        
    }

    printf("\n\n\n");
    printf("Game objective: \n");
    printf("During the game's duration, the player is able to guide Ren to travel to different settings. Ren is"
    "able to travel from one location to another, provided that location is adjacent to the said location.\n"
    "However, once they are at Shujin Academy, Ren is able to travel from one area within the\n"
    "campus to another freely, provided their next destination is also within the campus.\n");

    printf("\n\n\n");
    printf("Gameplay Mechanics:\n"
    "Each day will consist of two periods, namely the Afternoon and the Evening. Depending on\n"
    "Ren's location and the current period, certain activities will be available to the player. When Ren\n"
    "is at a certain location, he may either:\n"
    "1.) Perform an activity\n"
    "2.) Go Shopping (If applicable)\n"
    "3.) Travel to an adjacent area\n");

    printf("\n\n\n");
    printf("Social Stats:\n"
    "They are the main key points that are required to be able to unlock certain confidants. A\n"
    "confidant is considered available once Ren satisfies the minimum social stat requirements."
    "At the start of the game, Ren's level for each stat starts at Level 0\n\n"
    "Level 1 = 4 points required\n"
    "Level 2 = 8 points required from Level 1 (Total of 12 points.)\n"
    "Level 3 = 10 points required from Level 2 (Total of 22 points.)\n\n"
    "Earning points for a stat can be done by performing activities or consuming certain items.\n"
    "Spending time with some confidants can randomly give points for stats as well.\n");

    printf("\n\n\n");
    printf("Confidants:\n"
    "Confidants are individuals that Ren has formed a personal connection with in the past. These\n"
    "individuals will play a major role in determining the ending Ren receives at the end of the game.\n\n");
    printf("Points that are required to level up a confidant:\n"
    "Level 1 = N/A. Confidants begin at Level 1 upon unlocking them\n"
    "Level 2 = 7 points required from Level 1\n"
    "Level 3 = 10 points from Level 2 (For a total of 17 points). Level 3 unlocks the MAX Event of\n"
    "that confidant\n"
    "MAX Level = MAX Event Completed.\n");

    printf("\n\n\n");
    printf("Endings\n"
    "Perfect Ending: This ending is achievable by obtaining a MAX Level relationship with all 10 confidants.\n"
    "Good Ending: This ending is obtained by obtaining a MAX Level relationship with at least 7 confidants.\n"
    "Neutral Ending: This ending is obtained by obtaining a MAX Level relationship with at least 4 confidants.\n"
    "Bad Ending: This ending is obtained if less than 4 confidants end up reaching a MAX relationship.\n\n");
    
    printf("\n");
    getchar();
    printf("Press Enter to go back...");
    scanf("%c", &ch);
    while (ch != '\n') {
        printf("\n");
        printf("Press Enter to go back...");
        scanf("%c", &ch);
        
    }

    if(ch == '\n') {
        print_menu();
    }

}

void loading(void) {

    const char *text = "Loading...";
    int delay = 100000; // Delay in microseconds (1 second = 1000000 microseconds)
    const char spinner[] = { '|', '/', '-', '\\' };
    int spinnerIndex = 0;

    for (const char *ch = text; *ch != '\0'; ch++) {
        putchar(*ch);
        fflush(stdout);
        usleep(delay);
    }

    for (int i = 0; i < 10; i++) {
        printf("\r%s %c", text, spinner[spinnerIndex]);
        fflush(stdout);
        usleep(delay);
        spinnerIndex = (spinnerIndex + 1) % 4;
    }

    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⣄⠀⠀⠀⢀⣀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣀⣾⢛⣶⣤⣤⣤⣻⣳⣤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"      
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⣿⣿⣿⣿⡟⠋⠛⣿⣿⣿⣿⣿⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣤⣦⣴⣿⣿⣿⣯⠉⠸⣮⣿⡆⠀⠀⡉⣿⣿⢿⣟⣌⢳⣄⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣽⣟⣾⣿⢹⣿⡟⣿⡔⠀⠙⣷⣄⣾⠿⣏⠛⢷⣝⣿⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢉⣿⣻⣿⣿⣿⣧⣿⣧⣤⣴⣄⢸⣧⢀⣿⣄⡈⢻⣿⣿⣿⣿⣀⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡿⣻⣿⣿⢿⣿⣿⣿⢹⣿⣎⣿⣾⣿⣿⣿⣿⣾⣴⣿⣿⣿⡿⠿⠃⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣾⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡗⠀⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⢿⣿⣿⣿⣿⣿⣿⡿⣻⣯⣽⣿⣿⣿⣿⣿⣿⢹⣿⣿⣿⠿⠄⠀⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⡿⣏⠉⠻⡇⢸⣿⣿⣿⣿⠃⣼⣿⣿⣿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⡶⠋⠉⠉⣿⣿⣯⣷⣦⣄⠀⠿⢿⣻⡟⢯⡙⠂⡰⠃⠈⠘⣿⠏⢹⣾⣿⣿⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣶⣶⣾⣭⣿⣿⣿⣷⠀⠀⠳⣘⢿⣽⣿⣿⣿⣷⡄⠀⢻⡁⠀⠉⠉⠀⠀⠀⠀⢀⣴⡞⣩⣿⣿⣿⣷⣼⡆⠀⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣍⠩⢏⣥⠀⣩⣿⣿⣇⣹⡿⣷⣄⠀⠈⠙⠌⣿⣿⠿⠟⢻⡀⠀⠉⠒⠦⢄⣀⣀⣠⠔⠙⣯⣾⢿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣦⣼⣃⣰⣿⣿⣿⣿⣿⡂⢸⣿⣷⣶⠶⠚⠉⠀⠐⠒⢹⡇⠀⠀⠀⠀⠀⠀⢀⣠⠴⣶⣿⣿⣿⣿⡿⢿⣿⣽⡿⣿⣷⣄⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠁⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⢀⣠⣾⠷⣖⣺⣿⣿⡿⣃⣘⠛⢸⣿⠀⠀⠀⣽⣿⣧⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⢀⡏⠀⠀⣠⡾⠻⡁⠠⢄⣼⣿⣿⣋⢿⣯⣿⣿⣿⡇⣿⠀⠀⠉⢹⣿⣧⠀⠀⠀\n"
"⠀⢠⠖⢶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⡿⢻⡇⠀⠀⠀⠀⠀⠀⠀⣠⠞⠀⠀⣼⣇⡼⣠⣽⣿⣿⢛⣙⣫⣽⣿⣿⣿⣿⣿⠱⠟⠶⣲⠀⠀⡻⣯⣧⠀⠀\n"
"⢀⠇⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⡿⠠⢼⡇⠀⠀⠀⠀⠀⣀⠜⠁⠀⠀⢠⣿⣿⣿⣿⣫⣽⡛⣫⣽⣾⣿⣯⡙⢿⣿⣿⣼⢷⡶⠽⠀⠀⢙⣿⣿⡀⠀\n"
"⣿⣀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡛⣭⣿⣿⣷⡀⠸⠷⢽⠆⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣽⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣙⣟⡇\n"
"⢹⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣽⣿⣿⣿⣿⣿⣶⣌⠙⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣻⣧⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣿⡋⣴⣾⡿⣿⣿⡧\n"
"⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠶⣿⣿⣿⣿⠟⣩⡙⢻⣿⡟⠓⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⡇⠰⣿⣷\n"
"⠀⠸⣿⣿⣆⡀⠀⠀⠀⠀⠀⠀⠸⢥⣤⣼⣿⣿⣿⣿⣷⣦⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣼⡿⡟\n"
"⠀⠀⠈⢻⣿⣗⣤⣀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣽⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃\n"
"⠀⠀⠀⠀⠙⠻⢿⣿⣿⣶⣤⣤⣶⣿⣿⢿⣿⣿⣿⣿⣿⠟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠉⠀⠀⠹⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣛⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⠿⠋⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⠿⢷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠉⠉⠁⠀⠀⠀⠀⠀\n"
"⠀⠀⠀⠀⠀⠀⠀⠀⠠⠤⠤⠤⠤⠤⠤⠤⠤⠤⠬⠧⠼⠦⠤⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠿⠼⠿⠿⠿⠿⠿⠿⠟⠛⠛⠛⠛⠛⠿⠤⠤⠤⠤⠤⠤⠄⠀⠀\n");


    sleep(1);
    system("cls");

}

void character_profile(void) 
{

    system("cls");

    printf("Name: Morgana\n\n"
"Morgana is a being of unknown origin who\n"
"was created to be humanity's hope. He is\n"
"currently in the form of a cat, despite his\n"
"insistence that he is not a cat. He is\n"
"understood by individuals who have been to\n"
"the metaverse (a.k.a the Phantom Thieves)\n"
"but for the others, he merely sounds as if he is\n"
"meowing and purring instead of speaking.\n"
"He acts as Ren's voice of reason and travels\n"
"along with him in his bag wherever he goes.\n"
"He is very fond of sushi and has a one-sided\n"
"infatuation on Ann Takamaki, who he\n"
"affectionately calls “Lady Ann”.\n");

    printf("\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⡠⣰⠮⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠖⡉⡰⣴⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
"\t\t\t\t⢀⠀⠀⠄⠀⠀⠄⣀⣦⠻⠈⣔⢴⢼⣻⣟⣾⣄⣦⣢⢦⡠⡠⠀⡀⠀⠄⠀⠠⠀⠀⠠⠀⠀⠠⠀⠀⠠⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⢀⠠⣒⢵⢵⣳⢡⡪⣫⣻⣺⣳⢿⣞⠏⠊⡠⡢⣢⢧⡲⣤⡀⠀⠀⠀⠀⢀⠀⠀⢀⠀⠀⢀⠀⠀\n"
"\t\t\t\t⠁⠀⢀⢁⢢⢱⣳⢽⣻⣺⣳⢽⣺⣺⣺⡽⡟⠀⡂⣕⢕⢯⣺⣷⡫⣟⣿⣳⣕⡔⡤⣀⡀⡀⠀⠀⠀⠀⠀⠀\n"
"\t\t\t\t⠄⢐⡜⠠⢪⢯⢗⣯⢷⣳⢯⣻⣺⣞⣷⡻⠀⠁⣈⢪⢝⢵⣟⢮⢯⡿⣽⣟⣾⣞⣛⠺⠺⠮⢮⢔⣄⠐⠀⠀\n"
"\t\t\t\t⢠⣿⠡⢐⢵⢹⣽⢯⣿⣺⢯⡷⣻⣞⣗⣇⠂⠁⠜⡜⡭⣣⢳⣹⡾⣟⣯⣿⢾⣻⡮⡌⠜⡈⠀⢄⣌⠿⠎⠂\n"
"\t\t\t\t⣯⡿⣇⣄⣢⣿⡽⡿⠾⠽⠯⠯⡗⣷⣻⣾⣵⣄⣅⣘⣬⡾⣞⣯⣿⣻⣽⡾⣟⣯⣿⣪⣪⠴⠕⠃⠁⠁⠀⠀\n"
"\t\t\t\t⣿⠻⠙⠈⠈⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⢀⠈⠈⠋⠫⠳⢿⣻⣽⡾⣯⣷⢿⣻⡽⣾⡪⠀⠀⠀⠀⢀⠀⠄⠀\n"
"\t\t\t\t⠇⠀⠀⠀⠀⠢⢠⢴⡵⡷⣕⣤⡢⣐⡴⣞⠀⠀⠀⠀⠀⠀⠀⠌⢙⠻⢾⣻⣽⣟⡷⡁⠀⠀⠠⠈⠀⠀⠀⠀\n"
"\t\t\t\t⠀⢁⠀⠀⠀⠀⠀⠁⢏⢯⣻⣺⢽⢟⡿⡇⠀⠀⠀⠄⠂⠈⡀⠐⡀⢐⢈⣽⣳⣟⢇⠁⠀⠀⠀⠀⠀⠀⠀⠀\n"
"\t\t\t\t⠂⠀⠐⠀⠄⠀⡀⠀⠀⠱⢕⢕⠡⠡⠣⠁⠀⠄⠁⡀⠄⠂⠠⢁⢐⣴⣷⣟⢮⠗⠁⠀⠀⠀⠈⠀⠀⠀⠄⠀\n"
"\t\t\t\t⠀⠀⠀⠄⠈⠠⠠⠐⢀⠀⡈⠂⠣⠕⢁⠄⠡⢐⢀⠢⢐⣡⣱⣾⡿⡟⠞⠊⠁⠀⠀⠀⠀⠈⠀⠀⠈⠀⠀⠀\n"
"\t\t\t\t⠀⠁⠀⠀⠀⠀⠀⠁⠐⠐⠐⠨⠨⠨⣂⢪⢨⢶⠶⠯⠓⡋⠋⢈⢀⢀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠄⠀⠀⠄\n"
"\t\t\t\t⠀⢀⠀⠂⠀⠈⠀⠀⠀⠀⢀⢀⢔⠍⢆⠥⡱⡱⣕⣖⢝⢜⢝⢜⠐⠀⠠⠀⠀⢀⠀⣈⢤⣖⡆⠀⠀⠠⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠀⠄⠀⠂⣨⢴⡿⡌⠨⣠⣵⣿⣻⣿⣇⠑⠃⠳⠁⠀⠀⡀⠀⠀⢄⣾⠞⠫⠉⠉⠈⠈⢂⢀⠡\n"
"\t\t\t\t⠀⠀⢀⠀⠂⠀⠀⢤⣯⠟⠯⠻⡶⣿⠻⠋⢙⣟⣿⡷⠀⠀⠀⠀⠐⠀⠀⠀⢬⣿⠇⠀⠀⠀⠀⠐⠀⠀⠐⠈\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠀⢨⣿⣳⢧⡀⡀⣐⣟⡶⣴⡽⣯⣿⠇⠀⠀⠀⠁⠀⠀⠀⠀⢺⣿⡄⠀⠂⠀⠁⠀⠀⠀⢀⠀\n"
"\t\t\t\t⠀⠈⠀⠀⠀⠁⠀⠻⣿⣿⣬⣲⣿⣯⣿⣷⣿⡿⠃⠀⠀⠀⠁⠀⠀⠀⠂⠈⠀⠻⣿⣄⠀⠀⠀⠄⠈⠀⠀⠀\n"
"\t\t\t\t⠀⠐⠀⠀⠁⠀⠀⢸⣻⣽⣟⡿⣿⡿⣿⣻⣿⣿⡅⠀⢀⠀⠄⠀⠐⠀⠀⠀⠀⠀⠹⣿⠄⠐⠀⠀⠀⠀⠀⠠\n"
"\t\t\t\t⠀⠀⡀⠀⢀⠠⣌⢾⣿⣞⣷⣟⣷⡿⣿⡿⣟⣿⣿⣽⣷⣻⣆⠀⢀⠀⠐⠀⠀⡁⣠⡟⠀⠀⠀⠀⡀⠈⠀\n"
"\t\t\t\t⠄⠀⠀⠀⠀⡰⡏⡟⣕⢯⢯⢯⣻⢻⢽⣟⣿⣽⢾⣳⢿⣞⡮⣢⣤⣤⣦⣶⣷⠟⠋⠀⠀⠈⠀⠀⠀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠄⠀⣺⣿⣼⣿⣽⣳⣻⢾⣎⣖⣽⣷⣿⣯⢷⣻⣯⡯⡞⠛⠚⠉⠁⠀⠀⠀⠀⠄⠂⠀⠀⠂⠀⠀⠁\n"
"\t\t\t\t⠀⠠⠀⠀⠀⢷⣻⣽⣾⣯⣿⣻⣿⣟⣿⣟⣷⣿⣾⣟⣯⣷⡟⠂⠀⠀⠀⠠⠀⠁⠀⠀⠀⠀⠀⠀⡀⠀⠠⠀\n"
"\t\t\t\t⠀⠀⠀⠠⠀⠀⠀⢹⣾⣟⣿⠫⠓⠙⠻⢯⣷⢿⡾⣟⣷⡃⠀⠄⠀⠀⠄⠀⠀⠀⠀⠐⠀⠀⠐⠀⠀⠀⠀⠀\n"
"\t\t\t\t⠀⠁⠀⠀⠀⠀⡀⠀⢊⠕⡁⠀⠀⠀⠀⠈⠘⠻⢿⡻⠺⠩⠀⠀⠀⠀⠀⠀⢀⠀⠁⠀⠀⠐⠀⠀⠀⢀⠀⠁\n"
"\t\t\t\t⠀⠀⠄⠈⠀⠀⠀⢀⠐⡡⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠁⢅⢑⠀⢀⠈⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠄⠀⠀\n"
"\t\t\t\t⠂⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠂⠀⠀⠀⢀⠀⡈⠀⠀⠀⠀⠐⠀⠀⠁⠀⠀⠀⠀⠀⠀⢀\n");

    printf("\n\n\n");

    printf("Name: Ren Amamiya\n\n"
"Ren is currently a Third Year high school\n"
"student who has returned to Tokyo to take up\n"
"remedial classes to help him prepare for his\n"
"college entrance exams. He aims to live the\n"
"life of a normal high school student and to get\n"
"into a good prestigious university.\n");

printf("\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀\n"
       "\t\t\t\t⠀⢀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠀⠀⠀⠀⠀⠀\n"
      "\t\t\t\t⠀⠀⠀⣼⡿⠀⠀⣀⣀⣠⢴⣖⣺⢿⣿⣯⡿⢵⡦⠤⣄⣀⣀\n"
    "\t\t\t\t⠀⠀⣀⣠⣾⠿⠶⠛⣛⣛⣛⡛⢛⣩⣤⣬⣥⣤⣤⠄⠈⢤⣝⠻⣟⡛⠷⠦⠄⣀⣼⡟\n"
 "\t\t\t\t⣰⣧⡾⠿⢛⣁⣤⣶⣿⣿⣿⣽⣿⣿⣿⣭⣿⣿⣿⣿⣿⣿⣷⣤⡩⣿⣮⣿⣿⣿⣿⣟⡁\n"
"\t\t\t\t⣾⣛⣥⣤⣶⣾⣿⣿⣿⣯⣿⡻⣿⣿⣿⣿⣿⣿⣿⢿⣿⣟⡿⣿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣶⣄\n"
"\t\t\t\t⣶⣶⣶⣶⣶⣶⣿⣯⣝⡻⢿⣿⣷⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⡾⣿⣻⣿⣿⣿⣮⣟⢿⣿⣿⣷⣄⠀⢀⡀\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣞⣿⣿⣮⣻⣿⣿⣿⣿⣯⣿⣿⢿⣿⣿⣾⣿⣿⣿⣿⣿⡿⣿⣿⢿⣿⣿⢿⠟\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣮⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣽⣿⡳⢦⣄\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣌⠳⣄\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣷⢹⣿⣿⣿⣦⣽⣄⣸⠄\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠞⠁⠹⠹⢿⣿⣭⠤⠀\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⡉⠛⠒⠶⠤⠄⠙⢿⡛⠛⠀\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⡼⠟⠛⢿⣿⣿⠻⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⢸⡵⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⡀\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣀⣴⡾⠿⠯⢿⡇⠙⣿⣿⠟⠀⠀⠀⠀⠀⠀⣞⣷⠹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡞⠛⠉\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⡦⠀⢀⡀⢻⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠉⠋⢀⣵⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⣿⠁\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢛⡿⢀⡾⠁⠈⠀⠀⠿⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⢃⢳⠀⠀⠀⠀⠀⠀⠀⣠⠾⠁⢀⡿\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠵⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠋⠘⠀⢷⡀⠀⢀⣠⢴⣋⣱⠆⠀⣼⠃\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠾⠁⠀⠀⠀⠀⠳⣶⣿⣿⣿⣿⡏⠀⡼⠃⠀\n"
"\t\t\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣍⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⣴⡶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⣿⣿⣿⡿⢀⡴⠁\n"
"\t\t\t\t⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣤⣤⡤⠄⠀⠀⠀⣠⣾⠏⣾⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⣿⣿⣿⣿⢀⡞⠀\n"
"\t\t\t\t⠀⢻⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠯⠍⠉⠉⠉⠀⠀⢀⣴⣾⣿⡿⢸⠇⠀⠀⠀⠀⣀⣀⣴⣾⣿⣿⣿⣿⣿⣿⢯⠟⠀\n"
"\t\t\t\t⢳⣀⠹⢿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣭⣿⣿⣿⣄⡀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⠃⠈⠀⣠⢤⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢡⠏⠀\n"
"\t\t\t\t⡈⣿⣷⣤⣘⡻⢿⢿⣿⣿⣿⣿⣿⣿⣿⣟⠿⣿⣟⣿⣻⡿⠟⠛⢂⣤⣤⣾⣿⣿⣿⣿⣿⡿⠀⠠⠴⠾⠿⠿⠿⣿⣿⣯⣭⣭⣽⣿⣛⣓⡟⠀\n"
"\t\t\t\t⣧⢹⣮⣻⣿⣿⣿⣷⢻⣿⣿⣿⣿⣿⣿⣿⣦⣬⣭⣥⣭⣤⣤⣶⡿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣀⡀⠀⠀⠀⠀⠀⣽⡏⣿⣿⣿⣿⣿⡿⡿⠦⢤⣄⣀⣀\n"
"\t\t\t\t⠟⣿⣷⠉⠛⠻⣿⣿⣾⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⣻⢶⣄⡀⠀⠈⢀⡇⣿⣿⣿⣿⣿⣹⣿⣶⣦⣤⣈⣭⣿⣿⠳⣆\n"
"\t\t\t\t⠀⠘⢿⠷⣄⢀⡟⢹⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠚⠉⠙⢿⣟⠦⣄⡾⢹⣿⣶⣿⣿⢿⣿⣿⣿⣿⣿⣿⡟⡼⢻⣧⠸⣆⠀\n"
"\t\t\t\t⠀⠀⠀⠈⠛⢤⡾⠋⠀⠹⢟⠿⠿⢿⣿⣟⣉⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢹⠃⠀⠀⠀⡄⠈⠳⡜⣇⠃⣿⣿⣿⣿⣿⣮⣏⣝⣿⣿⣿⡿⠀⠈⣿⣧⢻\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⢀⣼⠁⠀⠀⢧⢻⡀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣁⠀⠀⢸⣿⣿⡇⠀\n"
"\t\t\t\t⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⠿⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⡾⠁⠀⠀⠀⠘⣆⣷⡀⡀⠹⣿⣿⣿⣿⣿⣿⣿⣿⢿⣦⣄⠀⣿⣿⡇\n"
"\t\t\t\t⠀⠀⢀⠀⡀⠀⠀⠀⠀⠀⢀⡠⠞⢉⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣿⠀⢰⠁⠀⠀⠀⠀⠀⠹⣸⣷⢹⡄⠘⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⡄⢸⣿⡇⠀\n"
"\t\t\t\t⠀⠪⢋⠀⠀⠀⠀⠀⠀⢰⣋⣧⡀⠈⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣾⣿⠀⠀⠙⠒⠤⠤⠤⠄⠀⠳⠤⠾⠃⠀⠘⣿⣿⣿⣿⣿⣿⣧⣿⣿⡇⠘⣿⣗⠀\n"
"\t\t\t\t⠘⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣦⣀⠀⠙⠻⣿⣿⣿⣿⣿⣿⡿⢟⣿⣿⣿⣿⣿⣿⣿⣷⣤⠤⠤⠄⢀⠀⢈⣉⣀⡀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⣿⣿\n");

printf("\n\n\n");

printf("CONFIDANTS INFORMATION SHEET\n\n");
printf("Name: Sojiro Sakura\n\n"
"Requirements: Available at the start + Unlocked \n"
"Automatically\n"
"Location: LeBlanc Café\n"
"Availability: Wednesday, Saturday, and Sunday\n"
"(Evening)\n"
"Sojiro is Ren's guardian who watches over him as he\n"
"attends high school. He works in LeBlanc Café, a place\n"
"known for it's amazing coffee blends and delicious curry.\n"
"As Ren's guardian, he occasionally asks Ren to help out\n"
"in the café, particularly in the mornings of the weekends\n"
"but Ren may have the option to voluntarily help out on\n"
"the evenings too.\n");

printf("\t\t\t\t⠀⠀   ⠀ ⢀⢄⣲⡿⣿⢿⣿⣿⣿⣿⣿⣶⣦⣄⡀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠀⢀⣴⣷⣿⣟⣿⣿⡿⣿⣽⣟⣿⣿⣿⣿⣿⣿⣶⣄⠀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⡐⠀⠐⢀⠠⠀⠄⠀⠄⠀⠂⡀⠄⢩⣿⢷⣻⣻⣿⢿⣿⣿⣿⡆⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠆⠈⡀⠄⠂⢂⠂⠐⠀⢁⠠⠀⠐⡨⣿⣿⢿⣽⣾⣿⣿⣿⣿⣿⡀⠀\n"
"\t\t\t\t⠀⠀⠀⠨⠀⠅⠀⠄⠊⠀⠂⠈⠠⠀⠄⠂⣡⡼⣿⣽⡿⣿⣽⣿⣾⣿⣯⣿⣇⠀⠀\n"
"\t\t\t\t⠀⠀⠀⢎⠠⠀⡁⠐⠜⠋⠲⠡⡀⠂⠀⠂⢙⡿⣿⣽⣿⣟⣿⣿⣿⣿⣿⣿⣿⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠨⠉⢅⠠⠐⠀⢩⢑⡀⠄⠈⡀⠁⡀⢻⣿⡟⡍⢿⣿⣿⣯⣿⣿⣟⣟⠀\n"
"\t\t\t\t⠀⠀⠀⠰⢩⢺⡀⡐⡈⢐⠓⠰⡤⡅⠄⣂⠤⢸⣻⠕⢜⢈⣿⣿⣿⣿⣿⣿⠇⠀\n"
"\t\t\t\t⠀⠀⠀⠈⠆⡐⠀⠑⠄⠐⡑⡁⢈⠰⠁⠂⠠⢰⣿⡸⢈⣴⣿⣿⣿⣷⣿⠃⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⢃⠄⠁⠄⠁⠅⠄⠄⠂⠊⡀⠌⠌⣨⣷⠇⠺⢿⣿⣿⣿⣿⡇⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠐⡌⡀⡰⠨⠐⠀⠊⠄⠂⠀⠂⡀⢸⣯⠈⠄⢩⣿⢟⣿⣾⣟⡀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⢑⠕⣅⡁⡀⡁⠐⢈⠨⢀⠁⣠⣺⡗⡐⠈⠠⠈⠆⠎⡊⢢⠀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⣸⢰⠤⠀⠄⢀⠁⡁⢈⣠⣶⡟⡏⢂⢂⠁⠄⢁⠪⠨⢐⣵⢄⡀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⣾⣾⣇⣈⢄⣢⣴⣶⡿⡞⡕⡜⠔⡐⡅⢐⠌⡐⠨⠐⣼⡿⡕⠰⡀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠠⠶⣾⣿⣿⣟⣿⣿⡿⢗⢻⢸⢨⢪⡘⡐⡨⠢⢁⢂⠂⠅⣞⣯⣿⢊⠆⡱⡀⠀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠓⠛⠛⠯⠻⢛⠭⡢⡣⡳⡭⡳⣕⢕⠕⡨⠨⢐⢔⠅⣟⣿⣽⡞⡜⢌⠐⢌⠢⡀⠀⠀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⡸⡜⠕⢕⢎⣞⢔⢑⢌⠬⡨⢢⢣⣳⣿⣽⣾⡗⡑⡌⡪⡘⢌⠢⡑⢌⠦⡀⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⡰⠝⡠⣪⢗⢝⡮⡳⣕⢔⢱⠨⡪⣺⣿⣿⣽⡷⡝⡌⢆⠎⡜⢜⢌⠪⡂⡇⢕⢄⠀\n"
"\t\t\t\t⠀⠀⠀⠀⠀⠈⢁⢔⣗⢯⣯⣷⡫⡯⣞⣗⣕⢕⢕⣿⣿⣯⣿⣏⢞⢜⢜⢸⢘⢜⢌⢎⢎⢜⢜⡸⡠⡀\n");


}


void print_menu(void)
{
    int choice;

    system("cls");
    print_logo();
    printf("\n\n\n");
    printf("\t\t\t\t\t\t \u2554\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2557\n");
    printf("\t\t\t\t\t\t \u2551                         Main Menu                          \u2551\n");
    printf("\t\t\t\t\t\t \u2560\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2563\n");
    printf("\t\t\t\t\t\t \u2551                                                            \u2551\n");
    printf("\t\t\t\t\t\t \u2551                       1. Start Game                        \u2551\n");
    printf("\t\t\t\t\t\t \u2551                       2. Rules                             \u2551\n");
    printf("\t\t\t\t\t\t \u2551                       3. Character profile                 \u2551\n");
    printf("\t\t\t\t\t\t \u2551                       4. Exit                              \u2551\n");
    printf("\t\t\t\t\t\t \u2551                                                            \u2551\n");
    printf("\t\t\t\t\t\t \u255a\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u255d\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);

    while(choice > 4 || choice < 1) {
        printf("Invalid input. Please try again.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    if(choice == 1) {
        
    } else if (choice == 2) {
        system("cls");
        loading();
        rules();
    } else if (choice == 3) {
        system("cls");
        loading();
        character_profile();
    } else if (choice == 4) {
        return;
    } 
}


int main (void)
{
    int choice;

    print_menu();



    return 0;
}