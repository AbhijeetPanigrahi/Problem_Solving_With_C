/*
PROBLEM: Multiply corresponding elements of two numerical lists and store the results in a third list.

ANALYSIS:
1. Take two numerical lists of the same length.
2. Multiply corresponding elements of the two lists.
3. Store the results in a third list and display all lists in a three-column table.
4. Compute and display the square root of the sum of the items in the third list.

DATA REQUIREMENTS:
Problem Inputs:
- float x[20]: First list of numbers
- float y[20]: Second list of numbers

Problem Outputs:
- float z[20]: Third list containing the product of corresponding elements of x and y
- Square root of the sum of the items in z

DESIGN:
1. Get the numerical lists from the user.
2. Multiply corresponding elements and store in the third list.
3. Display the lists in a table.
4. Compute and display the square root of the sum of the items in the third list.

IMPLEMENTATION:
*/

#include <stdio.h>
#include <math.h>

void multiply_lists() {
    float x[20], y[20], z[20];
    int n, i;
    float sum_z = 0;

    printf("Enter up to 20 numbers for list x, ended by a negative number:\n");
    for (i = 0; i < 20; i++) {
        scanf("%f", &x[i]);
        if (x[i] < 0) break;
    }
    n = i;

    printf("Enter up to 20 numbers for list y, ended by a negative number:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &y[i]);
    }

    // Compute the product of corresponding elements
    for (i = 0; i < n; i++) {
        z[i] = x[i] * y[i];
        sum_z += z[i];
    }

    // Display the arrays in a three-column table
    printf("\n%-10s%-10s%-10s\n", "x", "y", "z");
    for (i = 0; i < n; i++) {
        printf("%-10.2f%-10.2f%-10.2f\n", x[i], y[i], z[i]);
    }

    // Compute and display the square root of the sum of the items in z
    printf("\nSquare root of the sum of items in z: %.2f\n", sqrt(sum_z));
}

int main() {
    multiply_lists();
    return 0;
}
