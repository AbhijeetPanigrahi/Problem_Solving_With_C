#include <stdio.h>

// Function to calculate the predicted fast food charges
double fast_food_billions(int year) {
    // Calculate the number of years since 2005
    int t = year - 2005;
    // Calculate the predicted fast food charges
    return 33.2 + 16.8 * t;
}

int main() {
    int year;
    double prediction;

    while (1) {
        // Prompt the user to enter a year
        printf("Enter a year after 2005 (or a year before 2005 to stop): ");
        scanf("%d", &year);
        if (year < 2005) {
            printf("Year before 2005 entered. Program will stop.\n");
            break;
        }
        // Call the function to get the prediction
        prediction = fast_food_billions(year);
        // Display the prediction
        printf("Predicted fast food charges in %d: $%.2f billion\n", year, prediction);
    }

    return 0;
}