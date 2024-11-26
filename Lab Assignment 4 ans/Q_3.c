/* 
PROBLEM: The square root of a number N can be approximated by repeated calculation using the formula NG = 0.5(LG + N / LG). Write a function that calculates the square root of a number using this method.

ANALYSIS:
The program should take a number N and calculate its square root using the given formula. The process should be repeated until the difference between NG and LG is less than 0.005.

DATA REQUIREMENTS:
Problem Inputs:
- double N: The number for which the square root is to be calculated

Problem Outputs:
- double sqrt_N: The approximated square root of N

DESIGN:
1. Initialize LG to 1.0.
2. Calculate NG using the formula NG = 0.5(LG + N / LG).
3. Check if the difference between NG and LG is less than 0.005.
4. If the difference is less than 0.005, accept NG as the square root.
5. If the difference is not less than 0.005, set LG to NG and repeat steps 2 to 4.

IMPLEMENTATION:
*/

#include <stdio.h>
#include <math.h>

// Function to calculate the square root of a number using the given method
void calculate_sqrt(double N, double *sqrt_N) {
    double LG = 1.0;
    double NG;

    while (1) {
        NG = 0.5 * (LG + N / LG);
        if (fabs(NG - LG) < 0.005) {
            break;
        }
        LG = NG;
    }

    *sqrt_N = NG;
}

int main() {
    double N;
    double sqrt_N;

    // Get the number from the user
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &N);

    // Call the function to calculate the square root
    calculate_sqrt(N, &sqrt_N);

    // Display the result
    printf("The approximated square root of %.2f is %.5f\n", N, sqrt_N);

    return 0;
}
