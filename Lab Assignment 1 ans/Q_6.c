
#include<stdio.h>

// Function to compute the Celsius temperature at a given depth
double celsius_at_depth(double depth) {
    return 10 * depth + 20;
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(double celsius) {
    return 1.8 * celsius + 32;
}

int main() {
    double depth, celsius_temp, fahrenheit_temp;

    // Prompt the user for the depth in kilometers
    printf("Enter the depth inside the earth (in kilometers): ");
    scanf("%lf", &depth);

    // Calculate the temperature in Celsius at the given depth
    celsius_temp = celsius_at_depth(depth);
    
    // Convert the Celsius temperature to Fahrenheit
    fahrenheit_temp = fahrenheit(celsius_temp);

    // Display the results
    printf("At a depth of %.2f kilometers:\n", depth);
    printf("Temperature in Celsius: %.2f °C\n", celsius_temp);
    printf("Temperature in Fahrenheit: %.2f °F\n", fahrenheit_temp);

    return 0;
}


/*

Enter the depth inside the earth (in kilometers): 5
At a depth of 5.00 kilometers:
Temperature in Celsius: 70.00 °C
Temperature in Fahrenheit: 158.00 °F


*/