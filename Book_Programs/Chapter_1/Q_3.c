/*
PROBLEM: Estimate Freezer Temperature after Power Failure
ANALYSIS: To solve this problem, we need to calculate the freezer temperature using the given formula:
T = (4 * t^2) / (t + 2) - 20, where 't' is the time since the power failure in hours. The input from the user includes
the time since the power failure in whole hours and minutes. We first convert the time into hours and then use the
formula to calculate the temperature.

DATA REQUIREMENTS:
Problem Inputs:
int hours;    // The whole number of hours since the power failure
int minutes;  // The whole number of minutes since the power failure
double elapsed_time;  // Elapsed time in hours (including minutes)

Problem Outputs:
double temperature;   // Estimated freezer temperature in °C

DESIGN:
INITIAL ALGORITHM:
Step1. Read the number of whole hours since the power failure.
Step2. Read the number of minutes since the power failure.
Step3. Convert the total elapsed time into hours (elapsed_time = hours + (minutes / 60)).
Step4. Use the formula T = (4 * t^2) / (t + 2) - 20 to calculate the temperature.
Step5. Display the estimated temperature in the freezer.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Variables
    int hours, minutes;
    double elapsed_time, temperature;

    // Input: Get the elapsed time in hours and minutes
    printf("FREEZER TEMPERATURE ESTIMATOR\n");
    printf("Enter the number of whole hours since the power failure: ");  // Step 1
    scanf("%d", &hours);  // Step 2

    printf("Enter the number of minutes since the power failure: ");  // Step 3
    scanf("%d", &minutes);  // Step 4

    // Convert elapsed time into hours (minutes are converted to fraction of an hour)
    elapsed_time = hours + (minutes / 60.0);  // Step 5

    // Calculate the temperature using the formula
    temperature = (4 * elapsed_time * elapsed_time) / (elapsed_time + 2) - 20;  // Step 6

    // Output: Display the estimated freezer temperature
    printf("The estimated freezer temperature is %.2f°C.\n", temperature);  // Step 7

    return 0;
}
