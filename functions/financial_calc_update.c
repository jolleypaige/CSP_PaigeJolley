// Paige Jolley, Financial Calculator Update C
#include <stdio.h>
#include <math.h>

float percent(float cost, float percentThing){
    return((float)(cost/percentThing)*100);
}


float name(char bills[]){
    printf("What is your %s?\n", bills);
}

int main(void){
    printf("Welcome! This program will be your financial calculator.\n");
    float income = name("income");
    scanf("%f", &income);
    float rent = name("rent");
    scanf("%f", &rent);
    float utilities = name("utilities");
    scanf("%f", &utilities);
    float groceries = name("groceries");
    scanf("%f", &groceries);
    float transportation = name("transportation");
    scanf("%f", &transportation);

    float savings = income*.1;

    float spendings = (float)income-savings-rent-utilities-groceries-transportation;


    float per_rent = percent(rent, income);
    float per_utilities = percent(utilities, income);
    float per_groceries = percent(groceries, income);
    float per_transportation = percent(transportation, income);
    float per_spendings = percent(spendings, income);

     printf("Your rent is $%.2f and which is %.2f%% of your income.\n", rent, per_rent);
    
    printf("Your utilities is $%.2f and which is %.2f%% of your income.\n", utilities, per_utilities);

    printf("Your groceries is $%.2f and which is %.2f%% of your income.\n", groceries, per_groceries);

    printf("Your transportation is $%.2f and which is %.2f%% of your income.\n", transportation, per_transportation);

    printf("Your savings is $%.2f and which is 10%% of your income.\n", savings);

    printf("Your spending is $%.2f and which is %.2f%% of your income.\n", spendings, per_spendings);
    
}
