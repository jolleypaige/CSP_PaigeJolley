// Paige Jolley, Getting the time, C
#include <stdio.h>
#include <time.h>

int main(void){
    //Time since Jan 1 1970
    time_t seconds;

    seconds = time(NULL);

    //printf("Seconds since Jan 1, 1970 =%d\n", seconds);

    //Current time
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    //printf("Current time and date is %s\n", asctime(timeinfo));

    //current hour
    time_t now = time(NULL);

    struct tm * tm_struc = localtime(&now);
    int hour = tm_struc->tm_hour; //military time! (0-24)
    printf("%d\n", hour); 

    return 0;  
}