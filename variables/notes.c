#include <stdio.h>

char name[] = "Paige";
int age = 14;
float pi = 3.14;

int main(void){
    printf("Hello I am %s. I am %d years old. I like the number %f.\n", name, age, pi);
    printf("%d\n", age);
    printf("%f\n", pi);
    return 0;
}