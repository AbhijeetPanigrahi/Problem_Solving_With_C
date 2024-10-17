#include <stdio.h>

// Function to check emission limits based on the pollutant and odometer reading
void checkEmissions(int pollutant_number, double grams_per_mile, int odometer_reading) {
    double limit;
    
    // Determine the emission limit based on the pollutant and odometer range
    switch(pollutant_number) {
        case 1: // Carbon monoxide
            limit = (odometer_reading <= 50000) ? 3.4 : 4.2;
            break;
        case 2: // Hydrocarbons
            limit = (odometer_reading <= 50000) ? 0.31 : 0.39;
            break;
        case 3: // Nitrogen oxides
            limit = (odometer_reading <= 50000) ? 0.4 : 0.5;
            break;
        case 4: // Nonmethane hydrocarbons
            limit = (odometer_reading <= 50000) ? 0.25 : 0.31;
            break;
        default:
            printf("Invalid pollutant number.\n");
            return;
    }
    
    // Check if emissions exceed the permitted level
    if (grams_per_mile > limit) {
        printf("Emissions exceed permitted level of %.2f grams/mile.\n", limit);
    } else {
        printf("Emissions are within the permitted level of %.2f grams/mile.\n", limit);
    }
}

int main() {
    int pollutant_number;
    double grams_per_mile;
    int odometer_reading;

    // Step 1: Display pollutant options and get user input
    printf("(1) Carbon monoxide\n");
    printf("(2) Hydrocarbons\n");
    printf("(3) Nitrogen oxides\n");
    printf("(4) Nonmethane hydrocarbons\n");
    printf("Enter pollutant number: ");
    scanf("%d", &pollutant_number); // Step 2

    // Step 3: Get the grams emitted per mile
    printf("Enter number of grams emitted per mile: ");
    scanf("%lf", &grams_per_mile);

    // Step 4: Get the odometer reading
    printf("Enter odometer reading: ");
    scanf("%d", &odometer_reading);

    // Step 5: Check emissions based on inputs
    checkEmissions(pollutant_number, grams_per_mile, odometer_reading);

    return 0;
}
