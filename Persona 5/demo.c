#include <stdio.h>
#include "events.c"

int validInput(int n,int lowerBound,int upperBound)
{
	if (n >= lowerBound && n <= upperBound)
		return 1;
	else
		return 0;
}

void viewUnlockEvents()
{
	int bEnd = 0, choice;
	do
	{
		do
		{
			system ("cls");
			printf ("Viewing: UNLOCK EVENTS\n");
			printf ("\n");
			printf ("[1] - Sojiro Sakura\n");
			printf ("[2] - Ryuji Sakamoto\n");
			printf ("[3] - Ann Takamaki\n");
			printf ("[4] - Yusuke Kitagawa\n");
			printf ("[5] - Makoto Niijima\n");
			printf ("[6] - Futaba Sakura\n");
			printf ("[7] - Haru Okumura\n");
			printf ("[8] - Tae Takemi\n");
			printf ("[9] - Sadayo Kawakami\n");
			printf ("[10] - Sumire Yoshizawa\n");
			printf ("[11] - RETURN\n");
			printf ("\n");
			printf ("Choice: ");
			scanf ("%d",&choice);
		} while (!validInput(choice,1,11));
		
		if (choice >= 1 && choice <= 10)
			triggerEvent(choice,1);
		else
			bEnd = 1;
	} while (!bEnd);
}

void viewMaxEvents()
{
	int bEnd = 0, choice;
	do
	{
		do
		{
			system ("cls");
			printf ("Viewing: MAX EVENTS\n");
			printf ("\n");
			printf ("[1] - Sojiro Sakura\n");
			printf ("[2] - Ryuji Sakamoto\n");
			printf ("[3] - Ann Takamaki\n");
			printf ("[4] - Yusuke Kitagawa\n");
			printf ("[5] - Makoto Niijima\n");
			printf ("[6] - Futaba Sakura\n");
			printf ("[7] - Haru Okumura\n");
			printf ("[8] - Tae Takemi\n");
			printf ("[9] - Sadayo Kawakami\n");
			printf ("[10] - Sumire Yoshizawa\n");
			printf ("[11] - RETURN\n");
			printf ("\n");
			printf ("Choice: ");
			scanf ("%d",&choice);
		} while (!validInput(choice,1,11));
		
		if (choice >= 1 && choice <= 10)
			triggerEvent(choice,2);
		else
			bEnd = 1;
	} while (!bEnd);
}

int main()
{
	int bQuit = 0, choice;
	do
	{
		do
		{
			system("cls");
			printf ("Persona 5 text-based events viewer demo.\n");
			printf ("\n");
		
			printf ("[1] - Unlock Events\n");
			printf ("[2] - Max Events\n");
			printf ("[3] - Quit\n");
			printf ("\n");
			printf ("Choice: ");
			scanf ("%d",&choice);
		} while (!validInput(choice,1,3));
		
		if (choice == 1)
			viewUnlockEvents();
		else if (choice == 2)
			viewMaxEvents();
		else
			bQuit = 1;
	} while (!bQuit);
	
	return 0;
}
