/*
PROBLEM: Estimate water savings and installation cost by replacing toilets with low-flush models.
ANALYSIS: To solve this problem, we need to calculate the amount of water saved and the cost of replacing all toilets in the community. The number of toilets is determined by the community population, with one toilet for every 3 persons. The difference in water usage between old toilets (15 liters/flush) and new low-flush models (2 liters/flush) gives us the water saved per flush.

FORMULAS:
number_of_toilets = population / 3
water_saved_per_toilet_per_day = (old_flush_rate - new_flush_rate) * flushes_per_day
total_water_saved = number_of_toilets * water_saved_per_toilet_per_day
cost_of_installation = number_of_toilets * cost_per_toilet

DATA REQUIREMENTS:
Problem Inputs:
int population;        // Population of the community
Problem Outputs:
double total_water_saved; // Total water saved in liters/day
double cost_of_installation; // Total cost to install new toilets

DESIGN:
INITIAL ALGORITHM:
Step1. Read the population of the community from the user.
Step2. Calculate the number of toilets needed using the formula: number_of_toilets = population / 3.
Step3. Calculate the total water saved using the formula: total_water_saved = number_of_toilets * water_saved_per_toilet_per_day.
Step4. Calculate the cost to replace all toilets using the formula: cost_of_installation = number_of_toilets * 150.
Step5. Display the total water saved and the installation cost.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Constants
    const int persons_per_toilet = 3;         // 1 toilet for every 3 persons
    const int flushes_per_day = 14;           // 14 flushes per day per toilet
    const double old_flush_rate = 15.0;       // Old toilets use 15 liters per flush
    const double new_flush_rate = 2.0;        // New low-flush models use 2 liters per flush
    const double cost_per_toilet = 150.0;     // Cost to install each new toilet

    // Variables
    int population;
    int number_of_toilets;
    double water_saved_per_toilet_per_day, total_water_saved, cost_of_installation;

    // Input: Get the population of the community
    printf("Enter the population of the community: ");  // Step 1
    scanf("%d", &population);

    // Calculate the number of toilets
    number_of_toilets = population / persons_per_toilet;  // Step 2

    // Calculate the water saved per toilet per day
    water_saved_per_toilet_per_day = (old_flush_rate - new_flush_rate) * flushes_per_day;

    // Calculate the total water saved
    total_water_saved = number_of_toilets * water_saved_per_toilet_per_day;  // Step 3

    // Calculate the total cost to install the new toilets
    cost_of_installation = number_of_toilets * cost_per_toilet;  // Step 4

    // Output: Display the total water saved and installation cost
    printf("Total water saved: %.2f liters/day\n", total_water_saved);  // Step 5
    printf("Total cost to install new toilets: $%.2f\n", cost_of_installation);

    return 0;
}


/*
Enter the population of the community: 1000
Total water saved: 60533.33 liters/day
Total cost to install new toilets: $50000.00

*/