#include<stdio.h>

int main() {
    // Variables for inputs
    double takeoff_speed_kmh, distance_m;
    
    // Prompt user for input
    printf("Enter the jet's takeoff speed (in km/hr): ");
    scanf("%lf", &takeoff_speed_kmh);
    
    printf("Enter the distance over which the jet accelerates (in meters): ");
    scanf("%lf", &distance_m);
    
    // Convert speed from km/hr to m/s
    double takeoff_speed_ms = takeoff_speed_kmh * (1000.0 / 3600.0); // 1 km/hr = 1000/3600 m/s
    
    // Calculate acceleration using the formula: a = v^2 / (2 * s)
    double acceleration = (takeoff_speed_ms * takeoff_speed_ms) / (2 * distance_m);
    
    // Calculate time using the formula: t = v / a
    double time = takeoff_speed_ms / acceleration;
    
    // Display the results
    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to reach takeoff speed: %.2f seconds\n", time);
    
    return 0;
}


/*

Enter the jet's takeoff speed (in km/hr): 278
Enter the distance over which the jet accelerates (in meters): 94
Acceleration: 11.92 m/s^2
Time to reach takeoff speed: 6.47 seconds


*/