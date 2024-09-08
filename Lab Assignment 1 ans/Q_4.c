#include<stdio.h>
#include<math.h>  // For the pow() function

int main() {
    // Declare variables
    double purchase_price, down_payment, annual_interest_rate, monthly_interest_rate;
    int total_payments;
    
    // Prompt user for inputs
    printf("Enter the car's purchase price: $");
    scanf("%lf", &purchase_price);
    
    printf("Enter the down payment: $");
    scanf("%lf", &down_payment);
    
    printf("Enter the annual interest rate (as a percentage, e.g., 5 for 5%%): ");
    scanf("%lf", &annual_interest_rate);
    
    printf("Enter the total number of payments (e.g., 36, 48, 60): ");
    scanf("%d", &total_payments);
    
    // Calculate the amount borrowed (principal)
    double principal = purchase_price - down_payment;
    
    // Calculate the monthly interest rate from the annual interest rate
    monthly_interest_rate = (annual_interest_rate / 100) / 12;  // Convert percentage to decimal and annual to monthly
    
    // Calculate the monthly payment using the given formula
    double monthly_payment = (monthly_interest_rate * principal) / 
                             (1 - pow(1 + monthly_interest_rate, -total_payments));
    
    // Display the results
    printf("Amount borrowed: $%.2f\n", principal);
    printf("Monthly payment: $%.2f\n", monthly_payment);
    
    return 0;
}
