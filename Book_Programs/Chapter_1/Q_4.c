/*
PROBLEM: Convert Fahrenheit to Celsius
ANALYSIS: To solve this problem, we need to convert a given temperature in Fahrenheit to Celsius using the formula:
celsius = (5.0 / 9.0) * (fahrenheit - 32). The input is a temperature in degrees Fahrenheit, and the output is the
corresponding temperature in degrees Celsius.

DATA REQUIREMENTS:
Problem Inputs:
int fahrenheit;  // Temperature in degrees Fahrenheit

Problem Outputs:
double celsius;  // Temperature in degrees Celsius

DESIGN:
INITIAL ALGORITHM:
Step1. Read the temperature in degrees Fahrenheit from the user.
Step2. Use the conversion formula: celsius = (5.0 / 9.0) * (fahrenheit - 32).
Step3. Display the calculated temperature in degrees Celsius.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Variables
    int fahrenheit;
    double celsius;

    // Input: Get the temperature in Fahrenheit
    printf("FAHRENHEIT TO CELSIUS CONVERTER\n");
    printf("Enter temperature in Fahrenheit: ");  // Step 1
    scanf("%d", &fahrenheit);  // Step 2

    // Convert Fahrenheit to Celsius using the formula
    celsius = (5.0 / 9.0) * (fahrenheit - 32);  // Step 3

    // Output: Display the temperature in Celsius
    printf("The temperature in Celsius is %.2f°C.\n", celsius);  // Step 4

    return 0;
}
