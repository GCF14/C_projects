#include <stdio.h>
#include <windows.h>

int main (void)
{
    int n1, n2, h, m, s;
    int d = 1000;

    printf("/$$$$$$$  /$$           /$$   /$$               /$$                 /$$                     /$$      \n");
    printf("| $$__  $$|__/          |__/  | $$              | $$                | $$                    | $$      \n");
    printf("| $$  \\ $$ /$$  /$$$$$$  /$$ /$$$$$$    /$$$$$$ | $$        /$$$$$$$| $$  /$$$$$$   /$$$$$$$| $$   /$$\n");
    printf("| $$  | $$| $$ /$$__  $$| $$|_  $$_/   |____  $$| $$       /$$_____/| $$ /$$__  $$ /$$_____/| $$  /$$/\n");
    printf("| $$  | $$| $$| $$  \\ $$| $$  | $$      /$$$$$$$| $$      | $$      | $$| $$  \\ $$| $$      | $$$$$$/ \n");
    printf("| $$  | $$| $$| $$  | $$| $$  | $$ /$$ /$$__  $$| $$      | $$      | $$| $$  | $$| $$      | $$_  $$ \n");
    printf("| $$$$$$$/| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$| $$      |  $$$$$$$| $$|  $$$$$$/|  $$$$$$$| $$ \\  $$\n");
    printf("|_______/ |__/ \\____  $$|__/   \\___/   \\_______/|__/       \\_______/|__/ \\______/  \\_______/|__/  \\__/\n");
    printf("               /$$  \\ $$                                                                              \n");
    printf("              |  $$$$$$/                                                                              \n");
    printf("               \\______/                                                                               \n\n\n\n");

    printf("NOTE: This is a 24-hour clock.\n\n");
    printf("Set timer (hours:minutes:seconds format): ");
    scanf("%d:%d:%d", &h, &m, &s);
    printf("\n");

    if(h > 24 || m > 59 || s > 59) {
        printf("Error! Please enter a valid time.");
        return 0;
    } 

    while (1) {
        s++;
        if (s > 59) {
            m++;
            s = 0;
        }
        if (m > 59) {
            h++;
            m = 0;
        }
        if (h > 24) {
            h = 0;
        }
        
        printf("/$$$$$$$  /$$           /$$   /$$               /$$                 /$$                     /$$      \n");
    printf("| $$__  $$|__/          |__/  | $$              | $$                | $$                    | $$      \n");
    printf("| $$  \\ $$ /$$  /$$$$$$  /$$ /$$$$$$    /$$$$$$ | $$        /$$$$$$$| $$  /$$$$$$   /$$$$$$$| $$   /$$\n");
    printf("| $$  | $$| $$ /$$__  $$| $$|_  $$_/   |____  $$| $$       /$$_____/| $$ /$$__  $$ /$$_____/| $$  /$$/\n");
    printf("| $$  | $$| $$| $$  \\ $$| $$  | $$      /$$$$$$$| $$      | $$      | $$| $$  \\ $$| $$      | $$$$$$/ \n");
    printf("| $$  | $$| $$| $$  | $$| $$  | $$ /$$ /$$__  $$| $$      | $$      | $$| $$  | $$| $$      | $$_  $$ \n");
    printf("| $$$$$$$/| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$| $$      |  $$$$$$$| $$|  $$$$$$/|  $$$$$$$| $$ \\  $$\n");
    printf("|_______/ |__/ \\____  $$|__/   \\___/   \\_______/|__/       \\_______/|__/ \\______/  \\_______/|__/  \\__/\n");
    printf("               /$$  \\ $$                                                                              \n");
    printf("              |  $$$$$$/                                                                              \n");
    printf("               \\______/                                                                               \n\n\n\n");
        printf("Clock:\n");
        printf("%02d:%02d:%02d", h, m, s);
        Sleep(d);
        system("cls");

    }

    return 0;
}