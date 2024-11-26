/* 
PROBLEM: Write a program for an automatic teller machine that dispenses money. The user should enter the amount desired (a multiple of 10 dollars) and the machine dispenses this amount using the least number of bills. The bills dispensed are 50s, 20s, and 10s. Write a function that determines how many of each kind of bill to dispense.

ANALYSIS:
The program should take the amount desired as input and calculate the number of 50s, 20s, and 10s needed to dispense the amount using the least number of bills.

DATA REQUIREMENTS:
Problem Inputs:
- int amount: The amount of money desired (multiple of 10 dollars)

Problem Outputs:
- int num_50s: Number of 50 dollar bills
- int num_20s: Number of 20 dollar bills
- int num_10s: Number of 10 dollar bills

DESIGN:
1. Get the amount desired from the user.
2. Calculate the number of 50 dollar bills.
3. Calculate the number of 20 dollar bills.
4. Calculate the number of 10 dollar bills.
5. Display the number of each type of bill.

IMPLEMENTATION:
*/

#include <stdio.h>

// Function to determine the number of each kind of bill to dispense
void dispense_bills(int amount, int *num_50s, int *num_20s, int *num_10s) {
    *num_50s = amount / 50;
    amount %= 50;
    *num_20s = amount / 20;
    amount %= 20;
    *num_10s = amount / 10;
}

int main() {
    int amount, num_50s, num_20s, num_10s;

    // Get the amount desired from the user
    printf("Enter the amount desired (multiple of 10 dollars): ");
    scanf("%d", &amount);

    // Call the function to determine the number of each kind of bill
    dispense_bills(amount, &num_50s, &num_20s, &num_10s);

    // Display the number of each type of bill
    printf("Number of 50 dollar bills: %d\n", num_50s);
    printf("Number of 20 dollar bills: %d\n", num_20s);
    printf("Number of 10 dollar bills: %d\n", num_10s);

    return 0;
}



