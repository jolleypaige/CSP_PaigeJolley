// Paige Jolley, Name decorator C
#include <stdio.h>
#include <string.h>


int main(void){
    char name[50];
    printf("What is your name?\n");
    scanf("%s", &name);
    return 0;  

    char left[30] = "===";
    char right[30] = "===";
    strcat(left, name);
    strcat(left, right);
    printf("Your name is %s\n", left);
}