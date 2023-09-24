#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char input[100];
    char *answers[] = {
        "run notepad",
        "Run notepad",
        "run mspaint",
        "Run mspaint",
        "run paint",
        "Run paint",
        "run microsoft paint",
        "Run microsoft paint",
        "Run word",
        "run word",
        "run microsoft word",
        "Run microsoft word",
        "run powerpoint",
        "Run powerpoint",
        "Run microsoft powerpoint",
        "run microsoft powerpoint",
        "run chrome",
        "Run chrome",
        "Run chrome browser",
        "run chrome browser",
        "run youtube",
        "Run youtube",
        "run genshin impact",
        "Run Genshin Impact",
    };
    int length = sizeof(answers) / sizeof(*answers);
    int i;

   
    printf("Hello! How may I help you?");
    printf("\n");
    scanf("%99[^\n]s", input);
 
    
    for(i = 0; i < length; i++) {
        if (strcmp(input, answers[i]) == 0) {
            break;
        }
    }
      if(i < length) {
        if (strcmp(input,"run notepad") == 0 || strcmp(input,"Run notepad") == 0) {
        printf("Opening Notepad\n");
        system("start notepad");
        
       
    }   else if (strcmp(input, "run mspaint") == 0 || strcmp(input,"Run mspaint") == 0 || strcmp(input,"run paint") == 0 || strcmp(input,"Run paint") == 0){ 
        printf("Opening Paint\n");
        system ("start mspaint");
       
       
       
    }   else if (strcmp(input, "run word") == 0 || strcmp(input,"Run word") == 0 || strcmp(input,"run microsoft word") == 0 || strcmp(input,"Run microsoft word") == 0){
        printf("Opening Microsoft word\n");
        system("start winword\n");
      
  
       
    }   else if (strcmp(input, "run powerpoint") == 0 || strcmp(input,"Run powerpoint") == 0 || strcmp(input,"run microsoft powerpoint") == 0 || strcmp(input,"Run microsoft powerpoint") == 0){
        printf("Opening Powerpoint\n");
        system ("start powerpnt");
      
     
       
    }   else if (strcmp(input, "run chrome") == 0 || strcmp(input,"Run chrome") == 0 || strcmp(input,"Run chrome browser") == 0 || strcmp(input,"run chrome browser") == 0){
        printf("Opening Chrome\n");
        system ("start chrome");
      
     
        
    }   else if (strcmp(input, "run youtube") == 0 || strcmp(input,"Run youtube") == 0){
        printf("Opening Youtube\n");
        system ("start https://www.youtube.com/");
 
       
        
    }   else {
        printf("Invalid Command or Application does not Exist");
     
      
    }
    }

    return 0;
}

