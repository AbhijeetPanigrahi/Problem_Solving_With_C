/*  
PROBLEM: Calculate the monthly bill for a wireless plan with a flat rate, extra charges for weekday minutes, and tax deduction.

ANALYSIS:
The program will prompt the user for the number of weekday, night, and weekend minutes used. It will calculate:
- A base charge of $39.99 for up to 600 weekday minutes.
- Additional $0.40 per weekday minute if the total weekday minutes exceed 600.
- Night and weekend minutes are free.
- A 5.25% tax will be applied to the total charges.

The program should display:
- Input data (weekday, night, weekend minutes).
- Pretax bill, average cost per minute.
- The taxes and the total bill after tax.

DATA REQUIREMENTS:
Problem Inputs:
- double weekday_minutes: Number of weekday minutes used.
- double night_minutes: Number of night minutes used.
- double weekend_minutes: Number of weekend minutes used.

Problem Outputs:
- double total_charge: Total pretax charge.
- double avg_cost_per_minute: Average cost per minute.
- double tax: Total tax calculated.
- double total_bill: Final bill after taxes.

DESIGN:
1. Input the number of weekday, night, and weekend minutes used.
2. Calculate the pretax bill:
   - Base rate of $39.99 for up to 600 weekday minutes.
   - Additional charge of $0.40 for any excess weekday minutes.
3. Calculate tax as 5.25% of the total charge.
4. Calculate the total bill after applying the tax.
5. Display the input data, pretax bill, average cost per minute, tax, and total bill.

IMPLEMENTATION:
*/


#include <stdio.h>

int main() {
    double weekday_minutes, night_minutes, weekend_minutes;
    double base_rate = 39.99, additional_rate = 0.40;
    double total_charge, tax, total_bill, avg_cost_per_minute;

    // Step 1: Input the usage data
    printf("Enter the number of weekday minutes used: ");
    scanf("%lf", &weekday_minutes);

    printf("Enter the number of night minutes used: ");
    scanf("%lf", &night_minutes);

    printf("Enter the number of weekend minutes used: ");
    scanf("%lf", &weekend_minutes);

    // Step 2: Calculate the pretax bill
    if (weekday_minutes <= 600) {
        total_charge = base_rate;  // No extra charge if weekday minutes <= 600
    } else {
        total_charge = base_rate + (weekday_minutes - 600) * additional_rate;  // Additional charges for excess weekday minutes
    }

    // Step 3: Calculate tax (5.25%)
    tax = total_charge * 0.0525;

    // Step 4: Calculate the total bill after tax
    total_bill = total_charge + tax;

    // Step 5: Calculate the average cost per minute (excluding night and weekend minutes)
    avg_cost_per_minute = total_charge / (weekday_minutes + night_minutes + weekend_minutes);

    // Step 6: Output the results
    printf("\nDetailed Billing Breakdown:\n");
    printf("Weekday Minutes: %.2lf\n", weekday_minutes);
    printf("Night Minutes: %.2lf\n", night_minutes);
    printf("Weekend Minutes: %.2lf\n", weekend_minutes);
    printf("Pretax Bill: $%.2lf\n", total_charge);
    printf("Average Cost per Minute: $%.4lf\n", avg_cost_per_minute);
    printf("Taxes (5.25%%): $%.2lf\n", tax);
    printf("Total Bill: $%.2lf\n", total_bill);

    return 0;
}
