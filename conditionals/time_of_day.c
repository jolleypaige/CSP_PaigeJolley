// Paige Jolley, Time Of Day C
#include <stdio.h>
#include <time.h>
int hour;

int main(void){
    time_t now = time(NULL);
    struct tm * tm_struc = localtime(&now);
int hour = tm_struc->tm_hour;
    printf("%d\n", hour); 

if(hour >6 && hour >12){
    printf("Good Morning!\n");
}else if(hour >= 18){
    printf("You can vote.\n");
}else if(hour >= 16){
    printf("You can drive.\n");
}else{
    printf("You are young.\n");
}
    return 0;  
}