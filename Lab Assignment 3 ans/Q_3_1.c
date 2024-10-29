/* 
PROBLEM: Finding the smallest, largest, average values, range, and standard deviation in a collection of N numbers without using arrays.

ANALYSIS: 
To solve this problem, we need to take each of the N numbers as input without storing them in an array. We'll update the smallest and largest values directly during each input, and accumulate the sum and sum of squares for average and standard deviation calculations.

DATA REQUIREMENTS: 
Problem Inputs:
int N;             // Number of values in the collection
double num;        // Current value input by the user

Problem Outputs:
double smallest;         // Smallest value in the collection
double largest;          // Largest value in the collection
double average;          // Average of values in the collection
double range;            // Range (largest - smallest)
double std_deviation;    // Standard deviation of the values

DESIGN: 
INITIAL ALGORITHM:
1. Prompt user to input N (total number of values).
2. Initialize smallest and largest variables for comparisons.
3. Initialize sum and sum_squares for average and standard deviation calculations.
4. For each of the N values:
    a. Read the value.
    b. Update smallest and largest if necessary.
    c. Add the value to sum and its square to sum_squares.
5. After the loop:
    a. Compute the average by dividing sum by N.
    b. Compute the range by subtracting smallest from largest.
    c. Compute the standard deviation using the formula:
       std_deviation = sqrt((sum_squares / N) - (average * average))
6. Display smallest, largest, average, range, and standard deviation.

IMPLEMENTATION:
*/

#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    double num, smallest, largest, sum = 0, sum_squares = 0, average, range, std_deviation;

    // Step 1: Get the number of values
    printf("Enter the number of values (N): ");
    scanf("%d", &N);

    // Step 2: Initialize smallest and largest with the first input
    printf("Enter value 1: ");
    scanf("%lf", &num);
    smallest = largest = num;
    sum += num;
    sum_squares += num * num;

    // Step 4: Loop through the rest of the N-1 values
    for (i = 1; i < N; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%lf", &num);

        // Update smallest and largest values
        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;

        // Update sum and sum_squares
        sum += num;
        sum_squares += num * num;
    }

    // Step 5: Calculate average
    average = sum / N;

    // Step 6: Calculate range
    range = largest - smallest;

    // Step 7: Calculate standard deviation
    std_deviation = sqrt((sum_squares / N) - (average * average));

    // Step 8: Display the results
    printf("\nSmallest value: %.2f\n", smallest);
    printf("Largest value: %.2f\n", largest);
    printf("Average value: %.2f\n", average);
    printf("Range: %.2f\n", range);
    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}
