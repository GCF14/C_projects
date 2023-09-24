#include <stdio.h>

int main (void)
{
    int command;
    float balance = 0, deposit, withdraw;
    char first_name[21], last_name[21];

    printf("                                       **************************************\n");
    printf("                                       *       BANK MANAGEMENT SYSTEM       *\n");
    printf("                                       **************************************\n\n");
    printf(" Commands: 0 = Clear, 1 = Deposit, 2 = Withdraw, 3 = Balance, 4 = Profile, 5 = Back, 6 = Exit\n\n");
    
    printf(" Register an Account\n");
    printf(" First Name: ");
    scanf("%21[^\n]s", first_name);
    printf(" Last Name: ");
    scanf("%s", last_name);
    printf("\n\n");
    
    for (;;){
    back:
    printf(" Enter a command: ");
    scanf("%d", &command);
    switch (command){
        case 0:
        balance = 0;
        break;
        case 1:
        printf(" Enter amount to deposit: ");
        scanf("%f", &deposit);
        balance += deposit;
        printf("\a\n");
        break;
        case 2:
        printf(" Enter amount to withdraw: ");
        scanf("%f", &withdraw);
        balance -= withdraw;
        printf("\a\n");
        break;
        case 3:
        printf(" Current balance: %.2f\n\n", balance);
        break;
        case 4:
        printf(" \nProfile \n");
        printf(" First Name: %s\n", first_name);
    	printf(" Last Name: %s\n\n", last_name);
    	break;
    	case 6:
    	printf("\nTHANK YOU FOR USING OUR SERVICES");
        return 0;
        default:
        printf(" Commands: \n 1) 0 = Clear\n 2) 1 = Deposit\n 3) 2 = Withdraw\n 4) 3 = Balance\n 5) 4 = Profile\n 6) 5 = Back\n 7) 6 = Exit\n\n");
        break;
    }
    if (command == 5){
        goto back;
    }
   }
   

    return 0;
}