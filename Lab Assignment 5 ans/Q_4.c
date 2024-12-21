/*
PROBLEM: Write a recursive function to return a value based on the definition f(x) = 0 if x ≤ 0, f(x) = f(x - 1) + 2 otherwise. Prompt the user to enter a value for x.

ANALYSIS:
1. Define a recursive function that calculates the value based on the given definition.
2. Prompt the user to input a value for x.
3. Use the input value to calculate the result using the recursive function.

DATA REQUIREMENTS:
Problem Inputs:
- int x: Input value for the function

Problem Outputs:
- int f(x): Output value of the function

DESIGN:
1. Define the recursive function according to the given definition.
2. Prompt the user to enter a value for x.
3. Call the function with the user-provided input and display the result.

IMPLEMENTATION:
*/

#include <stdio.h>

int f(int x) {
    if (x <= 0) {
        return 0;
    } else {
        return f(x - 1) + 2;
    }
}

int main() {
    int x;

    // Prompt the user to enter a value for x
    printf("Enter a value for x: ");
    scanf("%d", &x);

    // Calculate and display the result
    printf("f(%d) = %d\n", x, f(x));

    return 0;
}
