/*
PROBLEM: Calculate the monthly payment for a car loan given the purchase price, down payment, annual interest rate, and the number of monthly payments.

ANALYSIS:
To solve this problem, we need to:
- Subtract the down payment from the purchase price to calculate the principal.
- Convert the annual interest rate to a monthly interest rate.
- Use the formula for calculating monthly payments:
  monthly_payment = (monthly_interest_rate * principal) / (1 - (1 + monthly_interest_rate)^(-total_payments))

DATA REQUIREMENTS:
Problem Inputs:
    double purchase_price;        // The car's purchase price in dollars
    double down_payment;          // The down payment in dollars
    double annual_interest_rate;  // The annual interest rate as a percentage
    int total_payments;           // The total number of monthly payments

Problem Outputs:
    double principal;             // The amount borrowed (purchase price - down payment)
    double monthly_payment;       // The calculated monthly payment in dollars

DESIGN:
INITIAL ALGORITHM:
Step 1: Prompt the user to enter the purchase price of the car.
Step 2: Prompt the user to enter the down payment amount.
Step 3: Prompt the user to enter the annual interest rate as a percentage.
Step 4: Prompt the user to enter the total number of payments.
Step 5: Calculate the amount borrowed (principal) by subtracting the down payment from the purchase price.
Step 6: Convert the annual interest rate to a monthly interest rate by dividing the percentage by 100 and then dividing by 12.
Step 7: Calculate the monthly payment using the formula:
        monthly_payment = (monthly_interest_rate * principal) / 
                          (1 - pow(1 + monthly_interest_rate, -total_payments)).
Step 8: Display the principal and the calculated monthly payment.

IMPLEMENTATION:
*/

#include <stdio.h>
#include <math.h>  // For the pow() function

int main() {
    // Declare variables
    double purchase_price, down_payment, annual_interest_rate, monthly_interest_rate;
    int total_payments;
    
    // Step 1: Prompt user for inputs
    printf("Enter the car's purchase price: $");
    scanf("%lf", &purchase_price);  // Step 2: Store the car purchase price
    
    printf("Enter the down payment: $");
    scanf("%lf", &down_payment);  // Step 3: Store the down payment amount
    
    printf("Enter the annual interest rate (as a percentage, e.g., 5 for 5%%): ");
    scanf("%lf", &annual_interest_rate);  // Step 4: Store the annual interest rate
    
    printf("Enter the total number of payments (e.g., 36, 48, 60): ");
    scanf("%d", &total_payments);  // Step 5: Store the total number of payments
    
    // Step 6: Calculate the amount borrowed (principal)
    double principal = purchase_price - down_payment;
    
    // Step 7: Calculate the monthly interest rate from the annual interest rate
    monthly_interest_rate = (annual_interest_rate / 100) / 12;  // Convert percentage to decimal and annual to monthly
    
    // Step 8: Calculate the monthly payment using the given formula
    double monthly_payment = (monthly_interest_rate * principal) / 
                             (1 - pow(1 + monthly_interest_rate, -total_payments));
    
    // Step 9: Display the results
    printf("Amount borrowed: $%.2f\n", principal);  // Display the principal (amount borrowed)
    printf("Monthly payment: $%.2f\n", monthly_payment);  // Display the calculated monthly payment
    
    return 0;
}
