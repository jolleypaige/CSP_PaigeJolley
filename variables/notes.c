// Paige Jolley, Variables Notes C
#include <stdio.h>

char name[20];
int age = 14;
float pi;

int main(void){
    printf("Welcome, what is your name: \n");
     scanf("%s", name);
     printf("how old are you: \n");
     scanf("%d", age);
     printf("Write out as much of pi as you know: \n");
     scanf("%f", pi);
    printf("Hello I am %s.", name);
    //printf("%d\n", age);
    //printf("%f\n", pi);
    return 0;
}