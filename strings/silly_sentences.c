// Paige Jolley, Silly Sentences C
#include <stdio.h>
#include <string.h>

int main(void){
    // Welcome for the user telling them what the program is (print)
    printf("Welcome! This program will create a silly story based on what the words write. For this to work, write only one word! \n");
    
    // ask user for words (print statement with a questions scanf to set to variable) part of above (in C we need to tell the user that they can only typer 1 word)
    char adjective[20];
    printf("Name an adjective: ");
    scanf("%s", adjective);

    char noun[20];
    printf("Name a noun: ");
    scanf("%s", noun);

    char verb[20];
    printf("Name a verb: ");
    scanf("%s", verb);



    //print out the story with the variables inserted ("welcome %s to my program", name)
    printf("The %s pig %s the %s.", adjective, verb, noun);


    return 0;
}