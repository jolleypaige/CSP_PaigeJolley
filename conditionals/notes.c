// Paige Jolley, Conditional notes C
#include <stdio.h>
#include <string.h> // Needed to compare strings

char name[]= "Treyson";
int num;

int main(void){
//How do you write an if statement in C?
    if(strcmp(name, "Vienne") == 0){ //strcmp means string comparison when the outcome if 0 the strings are the same
        printf("Hello Ms. Larose, welcome to class.");
    //How do you write else statements in C?

    }else{
        printf("Hello %s, welcome to class.", name);
    }

printf("How many siblings do you have?\n");
scanf("%d", &num);
//How do you write elif/ else if statements in C?
if(num == 0){
    printf("You are an only child\n");
}else if(num <= 2){
    printf("You have a couple of siblings\n");
}else if(num <= 5){
    printf("You have a few siblings\n");
}else{
    printf("You have a lot of siblings\n");
}
//How do you write the 3 logical operators in C?
// && = and 
// || = or
// ! = not
if(num ,10 && num >5){
    printf("That is an unlucky number\n");
}else if (num == 7 ) || num == 13){
    printf("%d is a large single digit number\n", num);
}else if(!(num < 10)){
    if(num == 12){
        printf("That is a dozen!\n");
    }else{
    printf("%d is a big number");
}{
        printf("You typed in %d\n", num);
}
    return 0;  
}