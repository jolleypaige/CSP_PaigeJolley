// Paige Jolley, My family loop, Python
#include <stdio.h>

int main(void){
    char family[5][20] = {"Curtis","Mark","Eric","Amy","Creg"};
     printf("Hello! %s\n", family[1]);
int flength = sizeof(family)/sizeof(family[0]);
int f;
for(f=0;f<flength;f++){
    printf("Hello! %s\n", family[f]);
}
    }
