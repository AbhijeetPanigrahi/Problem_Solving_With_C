#include<stdio.h>

// Function to display instructions to the user
void displayInstructions() {
    printf("This program calculates the constant rate of acceleration of a cyclist slowing down.\n");
    printf("It also determines how long the cyclist will take to come to rest from an initial speed of 10 mi/hr.\n");
}

// Function to calculate the acceleration
double calculateAcceleration(double initial_velocity, double final_velocity, double time) {
    return (final_velocity - initial_velocity) / time;
}

// Function to calculate the time to come to rest
double timeToRest(double initial_velocity, double acceleration) {
    // When final velocity is 0 (come to rest), t = -initial_velocity / acceleration
    return -initial_velocity / acceleration;
}

int main() {
    // Display instructions
    displayInstructions();
    
    // Define initial and final velocities in mi/hr
    double initial_velocity = 10.0;  // in mi/hr
    double final_velocity = 2.5;     // in mi/hr
    double time = 1.0;               // in minutes
    
    // Convert velocities to meters per second (1 mi/hr = 0.44704 m/s)
    initial_velocity *= 0.44704;
    final_velocity *= 0.44704;
    time *= 60;  // Convert time to seconds

    // Calculate acceleration
    double acceleration = calculateAcceleration(initial_velocity, final_velocity, time);
    
    // Calculate time to come to rest (final velocity = 0)
    double rest_time = timeToRest(initial_velocity, acceleration);

    // Output results
    printf("The constant acceleration of the cyclist is: %.4f m/s²\n", acceleration);
    printf("Time to come to rest from an initial speed of 10 mi/hr: %.2f seconds\n", rest_time);
    
    return 0;
}
