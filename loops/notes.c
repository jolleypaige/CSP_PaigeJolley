// Paige Jolley, loops notes 
#include <stdio.h>

int main(void){
// 1. What is a loop? 
    // A section of code repeated multiple times

// 2. What are the two types of loops?
    // while loops
    int start = 0;
    while(start <5){
        printf("Hello!\n");
        start++;
    }

    //for loops
    int q;
    for(q=0;q<5;q++){
        printf("%d\n", q);
    }

// 3. What is iteration
    //repeating something with minor changes each time

// 4. What are arrays(list)? 
    // A array is a variable holding muliple values

// 8. How do you make arrays(lists) in C?
    //Arrays items must all be in the same data type!
int grades[] = {88, 97, 100, 70, 72, 99, 61};
    // 1. Set data type first   2. AFTER naming put brackets and write the length of the list 3. List is surrounded by curly brackets {} 4. Commas , between each item.
//print a single item from a list
printf("CSP Grade: %d\n", grades[2]);
// change an item in the array
grades[3] = 95;
printf("CSP Grade: %d\n", grades[2]);
// size of arrays in bytes
int size = sizeof(grades);
// length in arrays items
int length = sizeof(grades)/sizeof(grades[0]);
printf("%d\n", length);
// array with string
// first brackets sets length of array
// second bracket sets lenght of each string
char movies[][20] = {"Cars", "Treasure Planet", "An American Tale", "Marley and Me", "The Avengers"};
printf("The movie is %s\n", movies[1]);
int mlength = sizeof(movies)/sizeof(movies[0]);
// 9. How do you make for loops in C?
// set the iterator, keeps track of times going through the loop (best practice set as x or y)
int x;
// in parens (starting point; ending point; what we count by)
for(x=0;x<=10;x+=2){
    printf("%d\n", x);
}
int m;
for(m=0;m<mlength;m++){
    printf("%s\n", movies[m]);
}
// 10. How do you make while loops in C?
    int w = 0;

    while(w<100)
        printf("%d\n", w);
        w +=10;
   
    return 0;  
}