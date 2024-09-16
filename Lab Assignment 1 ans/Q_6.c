/*
PROBLEM: Calculate the temperature inside the Earth at a given depth (in kilometers) and convert it from Celsius to Fahrenheit.

ANALYSIS:
The problem involves calculating the temperature in Celsius at a given depth based on the formula:
    Celsius temperature = 10 * depth + 20
The result is then converted to Fahrenheit using the formula:
    Fahrenheit temperature = 1.8 * Celsius + 32

DATA REQUIREMENTS:
Problem Inputs:
    double depth        // The depth inside the Earth in kilometers
Problem Outputs:
    double celsius_temp  // The calculated temperature at the given depth in Celsius
    double fahrenheit_temp // The temperature converted to Fahrenheit

DESIGN:
INITIAL ALGORITHM:
Step 1: Prompt the user to enter the depth in kilometers.
Step 2: Calculate the temperature in Celsius using the formula:
        celsius_temp = 10 * depth + 20
Step 3: Convert the Celsius temperature to Fahrenheit using the formula:
        fahrenheit_temp = 1.8 * celsius_temp + 32
Step 4: Output the depth, temperature in Celsius, and temperature in Fahrenheit.

IMPLEMENTATION:
*/

// Include necessary libraries
#include <stdio.h>

// Function to compute the Celsius temperature at a given depth
double celsius_at_depth(double depth) {
    return 10 * depth + 20;  // Formula for temperature in Celsius based on depth
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(double celsius) {
    return 1.8 * celsius + 32;  // Conversion from Celsius to Fahrenheit
}

int main() {
    // Declare variables for depth, Celsius temperature, and Fahrenheit temperature
    double depth, celsius_temp, fahrenheit_temp;

    // Step 1: Prompt the user for the depth in kilometers
    printf("Enter the depth inside the earth (in kilometers): ");
    scanf("%lf", &depth);

    // Step 2: Calculate the temperature in Celsius at the given depth
    celsius_temp = celsius_at_depth(depth);
    
    // Step 3: Convert the Celsius temperature to Fahrenheit
    fahrenheit_temp = fahrenheit(celsius_temp);

    // Step 4: Display the results
    printf("At a depth of %.2f kilometers:\n", depth);
    printf("Temperature in Celsius: %.2f °C\n", celsius_temp);
    printf("Temperature in Fahrenheit: %.2f °F\n", fahrenheit_temp);

    return 0;
}

/*

Sample Run:

Enter the depth inside the earth (in kilometers): 5
At a depth of 5.00 kilometers:
Temperature in Celsius: 70.00 °C
Temperature in Fahrenheit: 158.00 °F

*/
