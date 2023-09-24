#include <stdio.h>
#include <stdlib.h>

int main () {

    char ans1, ans2, ans3, ans4, ans5;
    int point01, point02, point03, point04, point05;
    int result;

    printf("Welcome to my quiz game about anime!\n");
    printf("*NOTE: Make sure to type down the letter of your answer in lower case*");
    printf("\n\n");

    printf("1) Who is the best mc in the list?\n");
    printf("a) Gao Mikado\nb) Tatsuya Shiba\nc) Rudeus Greyrat\nd) Issei Hyoudo\n\n");

    printf("Enter your answer: ");
    scanf(" %c", &ans1);

    if (ans1 == 'c'){
        printf("CONGRATULATIONS!!! You got the right answer.\n");
        point01= 1;
        printf("You have %d point.\n\n", point01);

    } else {
        printf("Dumbass fr.\n");
        point01 = 0;
        printf("You have %d points.\n\n", point01);
    }

    printf("2) Which is the best anime?\n");
    printf("a) One Piece\nb) Vinland Saga\nc) Attack on Titan\nd) Gintama\n\n");
    
    printf("Enter your answer: ");
    scanf(" %c", &ans2);

    if (ans2 == 'a'){
        printf("Congratulations you got it right!!!\n");
        point02 = 1;
        printf("You gained %d points.\n\n", point02);
    } else {
        printf("THERES LITERALLY ONLY ONE ANSWER. ONEEE PIECEEEE\n");
        point02 = 0;
        printf("You gained %d point.\n\n", point02);
    }

    printf("3) Which among the following is AOE?\n");
    printf("a) Mikasa oiled up ass bouncing\nb) Mikasa dying\nc) Eren not stopping at 80 and kills all of humanity\nd) chap 139\n\n");

    printf("Enter your answer: ");
    scanf(" %c", &ans3);
    
    if (ans3 == 'a' ){
        printf("AOEEEEE!!! What a man you are.\n");
        point03 = 1;
        printf("You gained %d points.\n\n", point03);
    } else {
        printf("You belong to r/shingekinokyojin.\n");
        point03 = 0;
        printf("You gained %d points.\n\n", point03);
    }


    printf("4) Who is the hottest female character in Jujutsu Kaisen? \n");
    printf("a) Nobara\nb) Maki\nc) Yuki Tsukumo\nd) Mei Mei\n\n");

    printf("Enter your answer: ");
    scanf(" %c", &ans4);
    
    if (ans4 == 'b' ){
        printf("W answer.\n");
        point04 = 1;
        printf("You gained %d points.\n\n", point04);
    } else {
        printf("It's Gojover\n");
        point04 = 0;
        printf("You gained %d points.\n\n", point04);
    }

    printf("5) Which movie is Makoto Shinkai's best film? \n");
    printf("a) Suzume no Tojimari\nb) Weathering with you\nc) Your Name\nd) 5 centimeters per second\n\n");

    printf("Enter your answer: ");
    scanf(" %c", &ans5);
    
    if (ans5 == 'c' ){
        printf("Lets get married.\n");
        point05 = 1;
        printf("You gained %d points.\n\n", point05);
    } else if (ans5 == 'd') {
       printf("You are lying to yourself and you know it. You pick this option cause you want to piss people off. Go kys. HAHHAHAHAH\n");
       printf("You picked the worst option fr.\n");
       point05 = -1;
       printf("You gained %d points.\n\n", point05);
    } else {
        printf("You are factually incorrect.\n");
        point05 = 0;
        printf("You gained %d points.\n\n", point05);
    }

    result = point01 + point02 + point03 + point04 + point05;
    printf("You have a total of %d points. Congratulations!!!", result);
    
    return 0;
}