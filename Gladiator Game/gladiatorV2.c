#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*This function is for when the user picks their armor. It uses spd, hp, and def as its parameters because depending on the armor type, it has
added stat bonus to the user's original stats.*/
int armor(int *spd, int *hp, int *def)
{
    int n;

    printf("\nPick 1 armor of your choice\n\n");
    printf("Armor Type          |  DEF   |   HP   |   SPD   |\n");
    printf("-------------------------------------------------\n");
    printf("1. Mythril          |   +3   |   --   |   +3    |\n");
    printf("2. Chain Mail       |   +8   |   +5   |   --    |\n");
    printf("3. Adamantite Armor |  +18   |   +10  |   -4    |\n");
    printf("4. Bare(No armor)   |   --   |   --   |   +10   |\n");

    do {
        printf("\nType in the number of the armor you want to equip: ");
        scanf("%d", &n);

       if (n > 4 || n < 1) {
            printf("\nPlease enter a number between 1-4: ");
            scanf("%d", &n);
        }
    } while (n > 4 || n < 1);


    printf("\n");

    switch(n) {
        case 1:
            *def += 3;
            *spd += 3;
            break;
        case 2: 
            *def += 8;
            *spd += 3;
            break;
        case 3: 
            *def += 18;
            *hp += 10;
            *spd -= 4;
            break;
        case 4: 
            *spd += 10;
            break;
    }

    return *def;
    
}

/*This function is for when the user picks their weapon. It uses atk and spd as its parameters because depending on the armor type, it has
added stat bonus to the user's original stats.*/
int weapon(int *atk, int *spd) {
    int n;

    system("cls");
    printf("Pick 1 weapon of your choice\n\n");
    printf("Weapon Type         |  ATK   |   SPD   |\n");
    printf("---------------------------------------\n");
    printf("1. Dagger           |  +15   |   +3    |\n");
    printf("2. Katana           |  +20   |   --    |\n");
    printf("3. Broad Sword      |  +40   |   -5    |\n");
    printf("4. Fist (No weapon) |   --   |   +10   |\n");

    do {
        printf("\nType in the number of the weapon you want to equip: ");
        scanf("%d", &n);

       if (n > 4 || n < 1) {
            printf("\nEnter a number between 1-4: ");
            scanf("%d", &n);
        }
    } while (n > 4 || n < 1);

    switch(n) {
        case 1:
            *atk += 15;
            *spd += 3;
            break;
        case 2: 
            *atk += 20;
            break;
        case 3: 
            *atk += 40;
            *spd -= 5;
            break;
        case 4:
            *spd += 10;
            break;
    }

    return *atk;
}

/*This function is for when the user decides to choose the move block. It uses the command1, def, and block as parameters because
the function will first check if the user did decide to choose the move block. It will then double the defense of the user and set the block 
count as 1 in order to show the program that the user used block for their current turn*/
int check_block(int *command1, int *def, int *block) {
    if (*command1 == 2 && *block == 0) {
        *def *= 2; 
        *block = 1;
    } 

    return *block;
}

/*This function checks whether the opponent decided to choose the move block. It uses the enemy_move, opp_defense, opp_block as its parameters.
Opp_block is used for counting to show the program that the cpu decided to choose block for its current turn. The opp_def is doubled when
the cpu decides to block the user.*/
int check_opp_block(int *enemy_move, int *opp_def, int *opp_block) {
    if (*enemy_move == 2 && *opp_block == 0) {
        *opp_def *= 2; 
        *opp_block = 1;
    } 

    return *opp_block;
}

/*This function is for attacking. It calculates damage by subtracting the atk value with the oppponent's defense value then gettinig the result 
of that. It will then subtract the opponent's hp by the result we got from subtractinf the user's attack value with the opponent's defense value.*/
int check_atk(int *command1, int *atk, int *spd, int *opp_hp, int *opp_def)
{
    int damage;

    if (*command1 == 1) {
        if(*atk < *opp_def) {
            damage = 0;
        } else {
            damage = *atk - *opp_def;
            *opp_hp -= damage;
        }
    } 

    return *opp_hp;
}

/*This checks if whether the cpu has decided to attack the user. It then calculates the damage it will do to the user by subtracting its attack
value to the user's defense value. It will then subtract the user's hp by the result it got from subtracting its own attack value and defense
value of the user.*/
int check_opp_atk (int *enemy_move, int *opp_atk, int *opp_spd, int *hp, int *def)
{
    int damage;

    if (*enemy_move == 1) {
        if(*opp_atk < *def) {
            damage = 0;
        } else {
            damage = *opp_atk - *def;
            *hp -= damage;
        }
    } 

    return *hp;
}

/*Checks if the user decided to pick the move charge and keeps track of charge count in order to make sure that the stats do not stack.*/
int check_charge(int *command1, int *atk, int *spd, int *charge_turn) 
{
    if (*command1 == 3 && *charge_turn == 0) {
        int original_atk = *atk;
        int original_spd = *spd;
        
        *atk = original_atk * 2;
        *spd = original_spd * 2;  
        *charge_turn = 2;
        printf("You charged up!\n");
    } else if (*command1 == 3 && *charge_turn > 0) {
        printf("You cannot charge again!\n");
    }

    return *charge_turn;
}

/*It is for checking if the cpu decided to do the move charge. It keeps track of the charge count and makes sure that charge cannot be stacked.*/
int check_opp_charge(int *enemy_move, int *opp_atk, int *opp_spd, int *opp_charge) {
    if (*enemy_move == 3 && *opp_charge == 0) {
        int original_opp_atk = *opp_atk;
        int original_opp_spd = *opp_spd;
        
        *opp_atk = original_opp_atk * 2; 
        *opp_spd = original_opp_spd * 2; 
        *opp_charge = 2;
        printf("Your opponent charged up!\n");
        
    } else if (*enemy_move == 3 && *opp_charge == 1) {
        printf("Your opponent cannot charge again!\n");
    }

    return *opp_charge;
}

/*Checks what the cpu chooses for its weapon and adds the bonus stats from the weapon to their initial stats.*/
int opp_weapon(int weapon, int *opp_atk, int *opp_spd)
{
    switch(weapon) {
        case 1:
            *opp_atk += 15;
            *opp_spd += 3;
            printf("Your opponent picked the weapon: Dagger\n");
            break;
        case 2: 
            *opp_atk += 20;
            printf("Your opponent picked the weapon: Katana\n");
            break;
        case 3: 
            *opp_atk += 40;
            *opp_spd -= 5;
            printf("Your opponent picked the weapon: Broad Sword \n");
            break;
        case 4:
            *opp_spd += 10;
            printf("Your opponent picked the weapon: Fist (No weapon)\n");
            break;
    }

    return *opp_atk;

}

/*It is for checking which the cpu decided to pick for its armor and adds the bonus stats to its own stats.*/
int opp_armor(int armor, int *opp_def, int *opp_hp, int *opp_spd)
{
    switch(armor) {
        case 1:
            *opp_def += 3;
            *opp_spd += 3;
            printf("Your opponent picked the armor: Mythril \n");
            break;
        case 2: 
            *opp_def += 8;
            *opp_spd += 3;
            printf("Your opponent picked the armor: Chain Mail \n");
            break;
        case 3: 
            *opp_def += 18;
            *opp_hp += 10;
            *opp_spd -= 4;
            printf("Your opponent picked the armor: Adamantite Armor\n");
            break;
        case 4: 
            *opp_spd += 10;
            printf("Your opponent picked the armor: Bare(No armor)\n");
            break;
    }

    return *opp_def;

}

/*It is for when the user chooses developer mode. They will be able to adjust their own stats and the stats of heir oppponent.*/
int dev_mode(int *opp_atk, int *opp_spd, int *opp_hp, int *opp_def, int *atk, int *spd, int *hp, int *def, int *chance_count, int *critical_chance, int *opp_chance_count, int *opp_critical_chance)
{
    int n;

    system("cls");
    printf("Welcome to developer mode!\n\n");
    printf("\nEnter the stats you want to give to yourself: \n");
    printf("HP: ");
    scanf("%d", &n);
    *hp = n;
    printf("DEF: ");
    scanf("%d", &n);
    *def = n;
    printf("ATK: ");
    scanf("%d", &n);
    *atk = n;
    printf("SPD: ");
    scanf("%d", &n);
    *spd = n;
    printf("Critical chance for user: ");
    scanf("%d", &n);
    *critical_chance = n;
    *chance_count = 1;

    printf("\n\n");
    printf("Enter the stats you want to give to your opponent: \n");
    printf("ATK: ");
    scanf("%d", &n);
    *opp_atk = n;
    printf("SPD: ");
    scanf("%d", &n);
    *opp_spd = n;
    printf("HP: ");
    scanf("%d", &n);
    *opp_hp = n;
    printf("DEF: ");
    scanf("%d", &n);
    *opp_def = n;
    printf("Critical chance for opponent: ");
    scanf("%d", &n);
    *opp_critical_chance = n;
    *opp_chance_count = 1;

    system("cls");

    return *opp_atk;

}

/*Checks if the user or the cpu will do a critical hit. The first and second if statements checks whether the user tried to use developer mode. If
they did not then it will proceed to check if the user or cpu will have a 15% chance of getting a critical hit.*/
int critical(int *crit_opp, int *my_crit, int *atk, int *opp_atk, int *crit_count, int *opp_crit_count, int *chance_count, int *critical_chance, int *opp_chance_count, int *opp_critical_chance)
{
    int critical, opp_critical;

    srand((unsigned) time(NULL));
    critical = rand() % 100 + 1;
    opp_critical = rand() % 100 + 1;

    if(*chance_count == 1) {
        critical = rand() % *critical_chance + 1;
        *my_crit = *atk;
        *crit_count = 1;
    } 
    
    if (*opp_chance_count == 1) {
        opp_critical = rand() % *opp_critical_chance + 1;
        *crit_opp = *opp_atk;
        *opp_crit_count = 1;
    }

    if (chance_count == 0 || opp_chance_count == 0) {
        if (critical <= 15) {
        *my_crit = *atk;
        *crit_count = 1;
    }
    
    if (opp_critical <= 15) {
        *crit_opp = *opp_atk;
        *opp_crit_count = 1;
    }
}

    return *crit_count;
}

int main (void)
{
    int opp_atk = 10, opp_spd = 10, opp_hp = 100, opp_def = 10, enemy_weapon, enemy_armor, enemy_move;;
    int n, atk = 10, spd = 10, hp = 100, def = 10, command, command1, charge_turn = 0, opp_charge = 0, block = 0, opp_block = 0;
    int crit_opp, my_crit, crit_count = 0, opp_crit_count = 0, chance_count = 0, critical_chance, opp_chance_count = 0, opp_critical_chance;

    /*Randomizes what the cpu will choose for weapon and armor.*/
    srand((unsigned) time(NULL));
    enemy_weapon = rand() % 4 + 1;
    enemy_armor = rand() % 4 + 1;

    printf("Welcome to my game!\n\n");
    printf("RULES: Both the player and the opponent start out with the same stats. "
           "Both the player and the opponent will pick one weapon and one armor each. \n"
           "The is a turn based game wherein you get to decide whether you want to Attack, Block, and Charge. "
           "Whoever reaches 0 HP first loses the game.\n\n");

    printf(" _____  _       ___ ______ _____  ___ _____ ___________   _____   ___  ___  ___ _____ \n");
    printf("|  __ \\| |     / _ \\|  _  \\_   _|/ _ \\_   _|  _  | ___ \\ |  __ \\ / _ \\ |  \\/  ||  ___|\n");
    printf("| |  \\/| |    / /_\\ \\ | | | | | / /_\\ \\| | | | | | |_/ / | |  \\// /_\\ \\|      || |__  \n");
    printf("| | __ | |    |  _  | | | | | | |  _  || | | | | |    /  | | __ |  _  || |\\/| ||  __| \n");
    printf("| |_\\ \\| |____| | | | |/ / _| |_| | | || | \\ \\_/ / |\\ \\  | |_\\ \\| | | || |  | || |___ \n");
    printf(" \\____/\\_____/\\_| |_/___/  \\___/\\_| |_/\\_/  \\___/\\_| \\_|  \\____/\\_| |_/\\_|  |_/\\____/ \n\n\n");

    printf("Here are your stats: \n");
    printf("HP = 100 (Hit Points - if this reaches zero, the player or opponent has been defeated)\n");
    printf("ATK = 10 (Attack Points - Amount of damage an attack will do)\n");
    printf("DEF = 10 (Defense Points - Amount of damage prevented from the attack)\n");
    printf("SPD = 10 (Speed Points - The higher the value, the faster the player/opponent will attack)\n");

    printf("\n\n**************************************\n");
    printf("*                MENU                *\n");
    printf("**************************************\n");
    printf("Commands: 1 = PLAY THE GAME, 2 = DEVELOPER MODE\n");

    /*Loop that checks whether the user will play the game through normal mode or developer mode. It will then ask the user to pick a weapon
    and an armor if the user decides to go through normal mode. After picking weapons and armor, it will show the updated stats of both
    the user and the cpu after equiping their items.*/
    do {
        printf("Enter a command: ");
        scanf("%d", &n);

        if (n == 1) {
            weapon(&atk, &spd);
            armor(&spd, &hp, &def);
            system("cls");
            printf("Your updated stats:\n");
            printf("HP  = %d\n", hp);
            printf("ATK  = %d\n", atk);
            printf("DEF  = %d\n", def);
            printf("SPD  = %d\n\n", spd);
            opp_weapon(enemy_weapon, &opp_atk, &opp_spd);
            opp_armor(enemy_armor, &opp_def, &opp_hp, &opp_spd);
            printf("\nYour opponent's updated stats:\n");
            printf("HP  = %d\n", opp_hp);
            printf("ATK  = %d\n", opp_atk);
            printf("DEF  = %d\n", opp_def);
            printf("SPD  = %d\n", opp_spd);
        } else if (n == 2) {
            dev_mode(&opp_atk, &opp_spd, &opp_hp, &opp_def, &atk, &spd, &hp, &def, &chance_count, &critical_chance, &opp_chance_count, &opp_critical_chance);
        } else {
            printf("Invalid command. Please enter 1 or 2.\n");
        }
    } while (n != 1 && n != 2);


    do {
        printf("\nPress 1 to proceed with gameplay: ");
        scanf("%d", &command);

       if (command != 1) {
            printf("\nPress 1 to proceed with gameplay: ");
            scanf("%d", &command);
        }
    } while (command != 1);
    

    if(command == 1) {
        system("cls");
    }

    /*Lists down the available moves for both the user and the opponent, then shows descriptions for each.*/
    printf("Choose your move: \n");
    printf("1. Attack -  Deal damage to your opponent based on your ATK value.\n");
    printf("2. Block - Lessen damage taken. Blocking doubles your DEF value. Blocking will always take priority\n");
    printf("3. Charge - Take an attack but double your ATK value and SPD value on the next turn. This action"
    "cannot be stacked. Your ATK and SPD value will go back to\n");
    printf("normal regardless of what action you choose at the end of the next turn.\n");

    /*Loop that continues until either the user or the cpu's hp is depleted to 0 or below*/
    while(hp > 0 && opp_hp > 0) {
        enemy_move = rand() % 3 + 1;
        critical(&crit_opp, &my_crit, &atk, &opp_atk, &crit_count, &opp_crit_count, &chance_count, &critical_chance, &opp_chance_count, &opp_critical_chance);

        printf("\nEnter the number of the move you want to do: ");
        
        do {
            scanf("%d", &command1);
            if (command1 > 3 || command1 < 1) {
                printf("Enter a number between 1-4: ");
            }
        } while (command1 > 3 || command1 < 1);

        printf("\n");

        /*if statement for when the user is faster or have equivalent speed with the enemy*/
        if(spd >= opp_spd) {
            /*checks for blocks first*/
            if (enemy_move == 2) {
                check_opp_block(&enemy_move, &opp_def, &opp_block);
                printf("Your opponent blocked your attack!\n");
            }

            /*checks for attack or charge for user*/
            if (command1 == 2) {
                check_block(&command1, &def, &block);
                printf("You blocked your opponent's attack!\n");
            }   
            if (command1 == 1) {
                if (crit_count == 1) {
                    opp_hp -= my_crit;
                    printf("You attacked your opponent!\n");
                    printf("You got a critical hit!\n");
                } else {
                    check_atk(&command1, &atk, &spd, &opp_hp, &opp_def);
                    printf("You attacked your opponent!\n");
                }
            } else if (command1 == 3) {
                check_charge(&command1, &atk, &spd, &charge_turn);
            }

            /*checks what the enemy does on their turn*/
            if (enemy_move == 1) {
                if (opp_crit_count == 1) {
                    hp -= crit_opp;
                    printf("Your opponent attacked you!\n");
                    printf("You opponent got a critical hit!\n");
                } else {
                    check_opp_atk(&enemy_move, &opp_atk, &opp_spd, &hp, &def);
                    printf("Your opponent attacked you!\n");    
                }  
            } else if (enemy_move == 3) {
                check_opp_charge(&enemy_move, &opp_atk, &opp_spd, &opp_charge);
            }

        } else if (opp_spd > spd) {
            /*checks for blocks first*/
            if (command1 == 2) {
                check_block(&command1, &def, &block);
                printf("You blocked your opponent's attack!\n");
            }

            /*checks what the enemy does on their turn*/
            if(enemy_move == 1) {
                if (opp_crit_count == 1) {
                    hp -= crit_opp;
                    printf("Your opponent attacked you!\n");
                    printf("You opponent got a critical hit!\n");
                } else {
                    check_opp_atk(&enemy_move, &opp_atk, &opp_spd, &hp, &def);
                    printf("Your opponent attacked you!\n");    
                }  
            } else if(enemy_move == 2) {
                check_opp_block(&enemy_move, &opp_def, &opp_block);
                printf("Your opponent blocked your attack!\n");
            } else if (enemy_move == 3) {
                check_opp_charge(&enemy_move, &opp_atk, &opp_spd, &opp_charge);
            }

            /*checks for attack or charge for user*/
            if (command1 == 1) {
                if (crit_count == 1) {
                    opp_hp -= my_crit;
                    printf("You attacked your opponent!\n");
                    printf("You got a critical hit!\n");
                } else {
                    check_atk(&command1, &atk, &spd, &opp_hp, &opp_def);
                    printf("You attacked your opponent!\n");
                }
            } else if(command1 == 3) {
                check_charge (&command1, &atk, &spd, &charge_turn);
            }
        }

        /*shows the updated stats every turn*/
        printf("Your updated stats:\n");
        printf("HP  = %d\n", hp);
        printf("ATK  = %d\n", atk);
        printf("DEF  = %d\n", def);
        printf("SPD  = %d\n\n", spd);
   
        printf("Your opponent's updated stats:\n");
        printf("HP  = %d\n", opp_hp);
        printf("ATK  = %d\n", opp_atk);
        printf("DEF  = %d\n", opp_def);
        printf("SPD  = %d\n\n\n", opp_spd);

        /*resets critical*/
        if (crit_count == 1) {
            crit_count = 0;
        }
        if(opp_crit_count) {
            opp_crit_count = 0;
        }
        
        /*resets the block for next turn*/
        if (block == 1) {
            def /= 2;
            block = 0;
        }
        if (opp_block == 1) {
            opp_def /= 2;
            opp_block = 0;
        }

        /*resets the charge for next turn*/
        if (charge_turn > 0) {
            if(charge_turn == 1) {
                atk /= 2;
                spd /= 2;
            }
            charge_turn -= 1;
        }
        if (opp_charge > 0) {
            if(opp_charge == 1) {
                opp_atk /= 2;
                opp_spd /= 2;
            }
            opp_charge -= 1;
        }

    }

    /*Shows and checks who the winner of tha game is*/
    if (hp <= 0) {
        printf(
        "▓██   ██▓ ▒█████   █    ██     ██▓     ▒█████    ██████ ▄▄▄█████▓\n"
        " ▒██  ██▒▒██▒  ██▒ ██  ▓██▒   ▓██▒    ▒██▒  ██▒▒██    ▒ ▓  ██▒ ▓▒\n"
        "  ▒██ ██░▒██░  ██▒▓██  ▒██░   ▒██░    ▒██░  ██▒░ ▓██▄   ▒ ▓██░ ▒░\n"
        "  ░ ▐██▓░▒██   ██░▓▓█  ░██░   ▒██░    ▒██   ██░  ▒   ██▒░ ▓██▓ ░ \n"
        "  ░ ██▒▓░░ ████▓▒░▒▒█████▓    ░██████▒░ ████▓▒░▒██████▒▒  ▒██▒ ░ \n"
        "   ██▒▒▒ ░ ▒░▒░▒░ ░▒▓▒ ▒ ▒    ░ ▒░▓  ░░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░  ▒ ░░   \n"
        " ▓██ ░▒░   ░ ▒ ▒░ ░░▒░ ░ ░    ░ ░ ▒  ░  ░ ▒ ▒░ ░ ░▒  ░ ░    ░    \n"
        " ▒ ▒ ░░  ░ ░ ░ ▒   ░░░ ░ ░      ░ ░   ░ ░ ░ ▒  ░  ░  ░    ░      \n"
        " ░ ░         ░ ░     ░            ░  ░    ░ ░        ░           \n"
        " ░ ░                                                             \n");
    } else if (opp_hp <= 0) {
        printf(
        "██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗██╗███╗   ██╗\n"
        "╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██║████╗  ██║\n"
        " ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║██╔██╗ ██║\n"
        "  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║██║╚██╗██║\n"
        "   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝██║██║ ╚████║\n"
        "   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝\n");
    }

    
    return 0;
}