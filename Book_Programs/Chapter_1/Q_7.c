/*
PROBLEM: Calculate how many BTUs of heat are delivered to a house.
ANALYSIS: To solve this problem, we need to get the number of gallons of oil burned and the efficiency of the furnace. Using these inputs, we can calculate the total BTUs of heat delivered to the house. We know that one barrel of oil (42 gallons) has an energy equivalent of 5,800,000 BTU.

FORMULA:
BTU_delivered = gallons * (BTU_per_barrel / 42) * efficiency

DATA REQUIREMENTS:
Problem Inputs:
double gallons;     // Number of gallons of oil burned
double efficiency;  // Efficiency of the oil furnace (in decimal form)

Problem Outputs:
double BTU_delivered; // BTUs of heat delivered to the house

DESIGN:
INITIAL ALGORITHM:
Step1. Read the number of gallons of oil burned from the user.
Step2. Read the efficiency of the furnace from the user.
Step3. Calculate the BTU of heat delivered using the formula:
       BTU_delivered = gallons * (5,800,000 / 42) * efficiency.
Step4. Display the calculated BTUs of heat delivered.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Constants
    const double BTU_per_barrel = 5800000.0;  // Energy equivalent of one barrel of oil in BTUs
    const double gallons_per_barrel = 42.0;   // Number of gallons in a barrel

    // Variables
    double gallons, efficiency, BTU_delivered;

    // Input: Get the number of gallons and efficiency from the user
    printf("BTU CALCULATOR FOR HEATING A HOUSE\n");
    printf("Enter the number of gallons of oil burned: ");  // Step 1
    scanf("%lf", &gallons);  // Step 2

    printf("Enter the efficiency of the furnace (as a percentage, e.g., 65 for 65%%): ");
    scanf("%lf", &efficiency);  // Step 3

    // Convert efficiency to decimal
    efficiency = efficiency / 100.0;

    // Calculate the BTU of heat delivered
    BTU_delivered = gallons * (BTU_per_barrel / gallons_per_barrel) * efficiency;  // Step 4

    // Output: Display the BTU delivered
    printf("The total BTUs of heat delivered to the house: %.2f BTU\n", BTU_delivered);  // Step 5

    return 0;
}


/*
BTU CALCULATOR FOR HEATING A HOUSE
Enter the number of gallons of oil burned: 100
Enter the efficiency of the furnace (as a percentage, e.g., 65 for 65%): 65
The total BTUs of heat delivered to the house: 8976190.48 BTU

*/