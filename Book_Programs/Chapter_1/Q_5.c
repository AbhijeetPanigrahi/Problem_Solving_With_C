/*
PROBLEM: Calculate Infusion Rate for I.V. Medication
ANALYSIS: To solve this problem, we need to get the volume of medication (in milliliters) to be infused and the total number of minutes over which it will be infused. Using these inputs, we can calculate the infusion rate in milliliters per hour.

DATA REQUIREMENTS:
Problem Inputs:
int volume;     // Volume of fluid in ml
int minutes;    // Number of minutes over which to infuse

Problem Outputs:
int vtbi;       // Volume to be infused (in ml)
double rate;    // Infusion rate in ml/hr

DESIGN:
INITIAL ALGORITHM:
Step1. Read the volume of fluid in ml from the user.
Step2. Read the number of minutes over which to infuse.
Step3. Set VTBI (Volume to be infused) equal to the input volume.
Step4. Calculate the infusion rate in ml/hr using the formula: rate = (volume / minutes) * 60.
Step5. Display the VTBI and infusion rate.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Variables
    int volume, minutes, vtbi;
    double rate;

    // Input: Get the volume and time from the user
    printf("IV MEDICATION INFUSION RATE CALCULATOR\n");
    printf("Enter the volume to be infused (ml): ");  // Step 1
    scanf("%d", &volume);  // Step 2

    printf("Enter the number of minutes over which to infuse: ");  // Step 3
    scanf("%d", &minutes);  // Step 4

    // Set VTBI (volume to be infused)
    vtbi = volume;

    // Calculate the infusion rate in ml/hr
    rate = (double)volume / minutes * 60;  // Step 5

    // Output: Display the VTBI and infusion rate
    printf("VTBI: %d ml\n", vtbi);  // Step 6
    printf("Rate: %.2f ml/hr\n", rate);  // Step 7

    return 0;
}


/*
Sample run: 
Volume to be infused (ml) => 100
Minutes over which to infuse => 20
VTBI: 100 ml 
Rate: 300 ml/hr 
*/