// Paige Jolley, Time Of Day C
#include <stdio.h>
#include <time.h>
int hour;

int main(void){
    time_t now = time(NULL);
    struct tm * tm_struc = localtime(&now);
int hour = tm_struc->tm_hour;
    printf("%d\n", hour); 

if(hour <= 12){
    printf("Good Morning!\n");
}else if(hour >= 13){
    printf("Good Afternoon!\n");
}else if(hour >= 18){
    printf("Good Evening\n");
}else{
    printf("It is night.\n");
}
    return 0;  
}