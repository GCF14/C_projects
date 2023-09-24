#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nameF[20];
   char nameL[20];
   int age;
   char adjective[20];
   char adjective2[20];
   char verb[20];
   char verb2[20];
   char verb3[20];

   printf("Hello! Welcome to my madlibs game.\n");
   printf("\n");
   printf("I would like for you to fill in the blanks.\n");
   printf("\n");
   printf("You may type in a word or a phrase on the blanks\n");
   printf("\n");
   printf (" I am [Name]. I am [Age] years old. I like [Verb]. I am also known to be [Adjective]");
   printf("\n");

    printf("Enter First Name: ");
    scanf("%s", nameF);
    printf("Enter Last Name: ");
    scanf("%s", nameL);
    printf("Enter an Age: ");
    scanf("%d", &age);
    printf("Enter a verb:");
    scanf("%s %s %s", verb, verb2, verb3);
    printf("Enter an adjective: ");
    scanf("%s %s", adjective, adjective2);

    printf("I am %s %s. I am %d years old. I like %s %s %s. I am also known to be %s %s.", nameF, nameL, age, verb, verb2, verb3, adjective, adjective2);
   

return 0;
}

