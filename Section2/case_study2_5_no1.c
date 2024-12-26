/*
*   Programmer: Imelda Alexis Jovita        Date: 26 December 2024
*   Instructor: The Book                    Problem: Supermarket Coin Processor 
*
*   Description: Counting the total pennies change from conversion machine 
*/

/*
*   Algo ideas: Convert each dollar to 100, each quarter to 25, each dime into 10, each nickel into 5, each pennies into 1
*/

#include <stdio.h>
#define DOLLAR_TO_CENTS 100
#define QUARTER_TO_CENTS 25
#define DIME_TO_CENTS 10
#define NICKLE_TO_CENTS 5
#define PENNIES_TO_CENTS 1

int main(){
    char first_letter, second_letter, third_letter;
    int dollar_amount, quarter_amount, dime_amount, nickle_amount, pennies_amount,
        total_cents, total_dollars, total_change;
    
    printf("Hello, dear customer!\nPlease enter your name: ");
    scanf("%c%c%c", &first_letter, &second_letter, &third_letter);
    printf("Alright, %c%c%c. Please enter all of your change.\n", first_letter, second_letter, third_letter);
    printf("Dollars:\t");
    scanf("%d", &dollar_amount);
    printf("Quarter:\t");
    scanf("%d", &quarter_amount);
    printf("Dime:\t");
    scanf("%d", &dime_amount);
    printf("Nickle:\t");
    scanf("%d", &nickle_amount);
    printf("Pennies:\t");
    scanf("%d", &pennies_amount);

    total_cents = (dollar_amount * DOLLAR_TO_CENTS) + (quarter_amount * QUARTER_TO_CENTS) + (dime_amount * DIME_TO_CENTS) + (nickle_amount * NICKLE_TO_CENTS) +(pennies_amount * PENNIES_TO_CENTS);
    total_dollars = total_cents / 100;
    total_change = total_cents % 100;

    printf("\n\nTotal dollars that you have: %d\nTotal change (in cents) that you have: %d", total_dollars, total_change);

    

}