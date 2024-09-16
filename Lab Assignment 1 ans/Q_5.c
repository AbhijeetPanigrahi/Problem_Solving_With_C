/*
PROBLEM: Calculate the constant rate of acceleration for a cyclist slowing down and determine how long it will take for the cyclist to come to rest from an initial speed of 10 mi/hr.

ANALYSIS:
To solve this problem, we need to:
- Define the initial and final velocities of the cyclist.
- Convert velocities from miles per hour (mi/hr) to meters per second (m/s).
- Convert the time from minutes to seconds.
- Use the formula to calculate the acceleration:
  acceleration = (final_velocity - initial_velocity) / time
- Use the formula to calculate the time it takes to come to rest:
  time_to_rest = -initial_velocity / acceleration

DATA REQUIREMENTS:
Problem Inputs:
    double initial_velocity;  // The initial velocity of the cyclist in mi/hr (to be converted to m/s)
    double final_velocity;    // The final velocity of the cyclist in mi/hr (to be converted to m/s)
    double time;              // The time over which the cyclist decelerates in minutes (to be converted to seconds)

Problem Outputs:
    double acceleration;      // The calculated acceleration in meters per second squared (m/s²)
    double rest_time;         // The calculated time to come to rest in seconds

DESIGN:
INITIAL ALGORITHM:
Step 1: Display instructions to the user explaining the purpose of the program.
Step 2: Define the initial velocity (10 mi/hr) and the final velocity (2.5 mi/hr).
Step 3: Define the time over which the deceleration occurs (in minutes).
Step 4: Convert the velocities from miles per hour to meters per second using the conversion factor (1 mi/hr = 0.44704 m/s).
Step 5: Convert the time from minutes to seconds by multiplying by 60.
Step 6: Calculate the acceleration using the formula:
        acceleration = (final_velocity - initial_velocity) / time
Step 7: Calculate the time to come to rest using the formula:
        rest_time = -initial_velocity / acceleration
Step 8: Output the results: the constant acceleration and the time to come to rest.

IMPLEMENTATION:
*/

// Include necessary libraries
#include <stdio.h>

// Function to display instructions to the user
void displayInstructions() {
    printf("This program calculates the constant rate of acceleration of a cyclist slowing down.\n");
    printf("It also determines how long the cyclist will take to come to rest from an initial speed of 10 mi/hr.\n");
}

// Function to calculate the acceleration
double calculateAcceleration(double initial_velocity, double final_velocity, double time) {
    return (final_velocity - initial_velocity) / time;  // Using the basic formula for acceleration
}

// Function to calculate the time to come to rest
double timeToRest(double initial_velocity, double acceleration) {
    // When final velocity is 0 (come to rest), t = -initial_velocity / acceleration
    return -initial_velocity / acceleration;
}

int main() {
    // Step 1: Display instructions
    displayInstructions();
    
    // Step 2: Define initial and final velocities in mi/hr
    double initial_velocity = 10.0;  // Initial velocity in mi/hr
    double final_velocity = 2.5;     // Final velocity in mi/hr
    double time = 1.0;               // Time in minutes
    
    // Step 3: Convert velocities to meters per second (1 mi/hr = 0.44704 m/s)
    initial_velocity *= 0.44704;  // Convert to m/s
    final_velocity *= 0.44704;    // Convert to m/s
    
    // Step 4: Convert time to seconds
    time *= 60;  // Convert time to seconds
    
    // Step 5: Calculate acceleration using the function
    double acceleration = calculateAcceleration(initial_velocity, final_velocity, time);
    
    // Step 6: Calculate time to come to rest using the function
    double rest_time = timeToRest(initial_velocity, acceleration);

    // Step 7: Output the results
    printf("The constant acceleration of the cyclist is: %.4f m/s²\n", acceleration);
    printf("Time to come to rest from an initial speed of 10 mi/hr: %.2f seconds\n", rest_time);
    
    return 0;
}
