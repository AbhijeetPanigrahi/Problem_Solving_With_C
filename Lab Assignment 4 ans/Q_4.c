/* 
PROBLEM: Calculate the drag force for a vehicle moving through the atmosphere. The drag force can be expressed as F = 0.5 * CD * A * ρ * V^2. Write a program that allows a user to input A and CD interactively and calls a function to compute and return the drag force. Display a table showing the drag force for a range of velocities from 0 m/s to 40 m/s in increments of 5 m/s.

ANALYSIS:
The program should take the projected area (A) and drag coefficient (CD) as inputs and calculate the drag force for a range of velocities. The density of air (ρ) is assumed to be 1.23 kg/m^3.

DATA REQUIREMENTS:
Problem Inputs:
- double A: Projected area of the vehicle (in m^2)
- double CD: Drag coefficient

Problem Outputs:
- double F: Drag force (in newtons) for each velocity

DESIGN:
1. Get the projected area (A) and drag coefficient (CD) from the user.
2. Calculate the drag force for velocities from 0 m/s to 40 m/s in increments of 5 m/s.
3. Display the drag force for each velocity.

IMPLEMENTATION:
*/

#include <stdio.h>

// Function to calculate the drag force
void calculate_drag_force(double A, double CD, double V, double *F) {
    const double rho = 1.23; // Density of air at sea level (kg/m^3)
    *F = 0.5 * CD * A * rho * V * V;
}

int main() {
    double A, CD, F;

    // Get the projected area and drag coefficient from the user
    printf("Enter the projected area of the vehicle (in m^2): ");
    scanf("%lf", &A);
    printf("Enter the drag coefficient: ");
    scanf("%lf", &CD);

    // Display the drag force for velocities from 0 m/s to 40 m/s in increments of 5 m/s
    printf("\nVelocity (m/s)    Drag Force (N)\n");
    printf("-------------------------------\n");
    for (int V = 0; V <= 40; V += 5) {
        calculate_drag_force(A, CD, V, &F);
        printf("%10d %18.2f\n", V, F);
    }

    return 0;
}
