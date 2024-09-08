#include<stdio.h>

int main() {
    // Constants
    const double g = 9.80;              // Gravitational constant (m/s^2)
    const double efficiency = 0.90;     // 90% efficiency in converting work to electrical energy
    const int water_mass_per_m3 = 1000; // Mass of 1 cubic meter of water (kg)
    const int mw_conversion_factor = 1000000; // 1MW = 10^6 Watts
    
    // Input variables
    double height, flow_rate;
    
    // Prompt user for input
    printf("Enter the height of the dam (in meters): ");
    scanf("%lf", &height);
    
    printf("Enter the flow rate of water (in cubic meters per second): ");
    scanf("%lf", &flow_rate);
    
    // Calculating the power
    double mass_per_second = flow_rate * water_mass_per_m3;  // mass (kg/s)
    double work_per_second = mass_per_second * g * height;   // w = mgh (Joules per second = Watts)
    double electrical_power = work_per_second * efficiency;  // power after considering 90% efficiency
    double megawatts = electrical_power / mw_conversion_factor; // convert to megawatts (MW)
    
    // Display the result
    printf("The dam will produce %.2f MW of power.\n", megawatts);
    
    return 0;
}
