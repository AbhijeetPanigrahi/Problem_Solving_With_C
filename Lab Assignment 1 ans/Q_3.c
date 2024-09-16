/*
PROBLEM: Calculate the acceleration (m/s²) and the time (seconds) for a jet fighter to be launched from an aircraft-carrier catapult, given the jet's takeoff speed in km/hr and the distance in meters.

ANALYSIS: 
We are given the takeoff speed and the distance. Using the kinematic equations, we can compute the acceleration and time.

- Convert takeoff speed from km/hr to m/s.
- Use the formula s = (1/2) * a * t² to find acceleration.
- Use the formula v = a * t to find time.

DATA REQUIREMENTS:
Problem Inputs:
    double speed_kmh;  // Takeoff speed in km/hr
    double distance_m; // Distance in meters

Problem Outputs:
    double acceleration; // Acceleration in m/s²
    double time;         // Time in seconds

FORMULAS:
    - Speed conversion: v (m/s) = speed_kmh * 1000 / 3600
    - Time: v = a * t => t = v / a
    - Distance: s = (1/2) * a * t² => a = (2 * s) / t²
*/

#include <stdio.h>
#include <math.h>

int main() {
    double speed_kmh, speed_ms, distance_m, acceleration, time;

    // Input: Get takeoff speed in km/hr and distance in meters
    printf("Enter the takeoff speed of the jet in km/hr: ");
    scanf("%lf", &speed_kmh);
    printf("Enter the distance over which the jet accelerates (meters): ");
    scanf("%lf", &distance_m);

    // Convert speed from km/hr to m/s
    speed_ms = speed_kmh * 1000 / 3600;

    // Calculate acceleration using the formula: a = v^2 / (2 * s)
    acceleration = (speed_ms * speed_ms) / (2 * distance_m);

    // Calculate time using the formula: t = v / a
    time = speed_ms / acceleration;

    // Output: Display the acceleration and time
    printf("The acceleration of the jet is: %.2f m/s²\n", acceleration);
    printf("The time taken to reach the takeoff speed is: %.2f seconds\n", time);

    return 0;
}
