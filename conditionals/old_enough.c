// Paige Jolley, Old Enough, C
#include <stdio.h>
int age ;

int main(void){
    printf("How old are you?\n");
scanf("%d", &age);
     
if(age == 15){
    printf("You can get a learners permit.\n");
}else if(age == 16){
    printf("You can drive.\n");
}else if(age >= 18){
    printf("You can vote.\n");
}else if(age >= 6){
    printf("You can go to school\n");
}else{
    printf("You are young.\n");
}
    return 0; 
}