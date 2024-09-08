#include<stdio.h>

int main() {
    // Constants
    const int people_per_toilet = 3;        // 1 toilet per 3 people
    const int flushes_per_day = 14;         // 14 flushes per day per toilet
    const int old_flush_liters = 15;        // Old toilet uses 15 liters per flush
    const int new_flush_liters = 2;         // New low-flush toilet uses 2 liters per flush
    const int cost_per_toilet = 150;        // Cost to install one new toilet ($)
    
    // Input variable
    int population;
    
    // Prompt user for the population size
    printf("Enter the community population: ");
    scanf("%d", &population);
    
    // Calculating the number of toilets required
    int number_of_toilets = population / people_per_toilet;
    
    // Water usage with old toilets
    int old_water_usage = number_of_toilets * flushes_per_day * old_flush_liters;
    
    // Water usage with new toilets
    int new_water_usage = number_of_toilets * flushes_per_day * new_flush_liters;
    
    // Water saved per day
    int water_saved_per_day = old_water_usage - new_water_usage;
    
    // Total cost of replacing toilets
    int total_installation_cost = number_of_toilets * cost_per_toilet;
    
    // Display the results
    printf("Water saved per day: %d liters\n", water_saved_per_day);
    printf("Total cost to install new toilets: $%d\n", total_installation_cost);
    
    return 0;
}
