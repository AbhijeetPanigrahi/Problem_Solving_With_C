/*
PROBLEM: Calculate a Pythagorean triple (side1, side2, hypotenuse) given two positive integers m and n (where m > n) using the formulas:
    side1 = m^2 - n^2
    side2 = 2 * m * n
    hypotenuse = m^2 + n^2

ANALYSIS: 
To solve this problem, we need to prompt the user for two integers m and n, where m > n, and then compute the values of side1, side2, and the hypotenuse based on the Pythagorean triple formulas. 

DATA REQUIREMENTS:
Problem Inputs:
int m, n; // two positive integers, where m > n

Problem Outputs:
int side1, side2, hypotenuse; // values of the Pythagorean triple

DESIGN:
INITIAL ALGORITHM:
Step 1: Read the values of m and n from the user.
Step 2: Ensure that m > n.
Step 3: Compute side1 using the formula side1 = m^2 - n^2.
Step 4: Compute side2 using the formula side2 = 2 * m * n.
Step 5: Compute the hypotenuse using the formula hypotenuse = m^2 + n^2.
Step 6: Display the values of side1, side2, and the hypotenuse.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Variables to hold m, n, side1, side2, and hypotenuse
    int m, n, side1, side2, hypotenuse;

    // Input: Get values of m and n from the user
    printf("Enter the value of m (m > n): ");
    scanf("%d", &m);

    printf("Enter the value of n (m > n): ");
    scanf("%d", &n);

    // Check if m is greater than n
    if (m > n) {
        // Calculate side1, side2, and hypotenuse using the formulas
        side1 = (m * m) - (n * n);     // Step 3
        side2 = 2 * m * n;             // Step 4
        hypotenuse = (m * m) + (n * n); // Step 5

        // Output: Display the Pythagorean triple
        printf("Pythagorean triple: \n");
        printf("Side 1: %d\n", side1);
        printf("Side 2: %d\n", side2);
        printf("Hypotenuse: %d\n", hypotenuse);  // Step 6
    } else {
        // If m is not greater than n, print an error message
        printf("Error: m must be greater than n.\n");
    }

    return 0;
}

/*
Enter the value of m (m > n): 2
Enter the value of n (m > n): 1
Pythagorean triple: 
Side 1: 3
Side 2: 4
Hypotenuse: 5

*/