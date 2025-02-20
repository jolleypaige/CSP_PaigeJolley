// Paige Jolley, Financial Calculator Update C
#include <stdio.h>
#include <math.h>

void info(cost, income, type){


    
}


void name(char bills[30]){
    printf("Welcome! This program will be your financial calculator.\n");
    printf("What is your %s?\n", bills);

}

int main(void){
    bills("rent");
    bills("rent");
    bills("rent");
    bills("rent");
    bills("rent");
    bills("rent");











    int income;
    printf("What is your income?\n");
    scanf("%d", &income);

    int rent;
    printf("What is your rent?\n");
    scanf("%d", &rent);

    int utilities;
    printf("What is the cost of your utilities?\n");
    scanf("%d", &utilities);

    int groceries;
    printf("What is the cost of your groceries?\n");
    scanf("%d", &groceries);

    int transportation;
    printf("What is the cost of your transportation?\n");
    scanf("%d", &transportation);

    float savings = income*.1;

    float spending = (float)income-savings-rent-utilities-groceries-transportation;

    float per_rent = (float)rent/income *100;

    float per_utilities = (float)utilities/income *100;

    float per_groceries = (float)groceries/income *100;

    float per_transportation = (float)transportation/income *100; 

    float per_spendings = (float)spending/income *100;

    printf("Your rent is $%.2f and which is %.2f%% of your income.\n", rent, per_rent);
    
    printf("Your utilities is $%.2f and which is %.2f%% of your income.\n", utilities, per_utilities);

    printf("Your groceries is $%.2f and which is %.2f%% of your income.\n", groceries, per_groceries);

    printf("Your transportation is $%.2f and which is %.2f%% of your income.\n", transportation, per_transportation);

    printf("Your savings is $%.2f and which is 10%% of your income.\n", savings);

    printf("Your spending is $%.2f and which is %.2f%% of your income.\n", spending, per_spendings);
    

}
